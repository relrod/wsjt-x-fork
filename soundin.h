#ifndef SOUNDIN_H
#define SOUNDIN_H

#include <QtCore>
#include <QDebug>


// Thread gets audio data from soundcard and signals when a buffer of
// specified size is available.
class SoundInThread : public QThread
{
  Q_OBJECT
  bool quitExecution;           // if true, thread exits gracefully

protected:
  virtual void run();

public:
  bool m_dataSinkBusy;

  SoundInThread():
    quitExecution(false),
    m_dataSinkBusy(false)
  {
  }

  void setInputDevice(qint32 n);
  void setMonitoring(bool b);
  void setPeriod(int ntrperiod, int nsps);
  int  mstep();
  double samFacIn();

signals:
  void readyForFFT(int k);
  void error(const QString& message);
  void status(const QString& message);

public slots:
  void quit();

private:
  double m_SamFacIn;                    //(Input sample rate)/12000.0
  qint32 m_step;
  qint32 m_nDevIn;
  qint32 m_TRperiod;
  qint32 m_TRperiod0;
  qint32 m_nsps;
  bool   m_monitoring;
};

extern "C" {
  void recvpkt_(int* nsam, quint16* iblk, qint8* nrx, int* k, double s1[],
                double s2[], double s3[]);
}

#endif // SOUNDIN_H
