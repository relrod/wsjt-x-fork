// Lorentz energy fading tables for QRA64
static const int glen_tab_lorentz[64] = {
  2,   2,   2,   2,   2,   2,   2,   2, 
  2,   2,   2,   2,   2,   2,   3,   3, 
  3,   3,   3,   3,   3,   4,   4,   4, 
  4,   4,   5,   5,   5,   5,   6,   6, 
  7,   7,   7,   8,   8,   9,  10,  10, 
 11,  12,  13,  14,  15,  16,  17,  19, 
 20,  22,  23,  25,  27,  30,  32,  35, 
 38,  41,  45,  49,  53,  57,  62,  65
};
static const float glorentz1[2] = {
0.0214f, 0.9107f
};
static const float glorentz2[2] = {
0.0244f, 0.9030f
};
static const float glorentz3[2] = {
0.0280f, 0.8950f
};
static const float glorentz4[2] = {
0.0314f, 0.8865f
};
static const float glorentz5[2] = {
0.0349f, 0.8773f
};
static const float glorentz6[2] = {
0.0388f, 0.8675f
};
static const float glorentz7[2] = {
0.0426f, 0.8571f
};
static const float glorentz8[2] = {
0.0463f, 0.8459f
};
static const float glorentz9[2] = {
0.0500f, 0.8339f
};
static const float glorentz10[2] = {
0.0538f, 0.8210f
};
static const float glorentz11[2] = {
0.0579f, 0.8074f
};
static const float glorentz12[2] = {
0.0622f, 0.7930f
};
static const float glorentz13[2] = {
0.0668f, 0.7777f
};
static const float glorentz14[2] = {
0.0715f, 0.7616f
};
static const float glorentz15[3] = {
0.0196f, 0.0765f, 0.7445f
};
static const float glorentz16[3] = {
0.0210f, 0.0816f, 0.7267f
};
static const float glorentz17[3] = {
0.0226f, 0.0870f, 0.7080f
};
static const float glorentz18[3] = {
0.0242f, 0.0925f, 0.6885f
};
static const float glorentz19[3] = {
0.0259f, 0.0981f, 0.6682f
};
static const float glorentz20[3] = {
0.0277f, 0.1039f, 0.6472f
};
static const float glorentz21[3] = {
0.0296f, 0.1097f, 0.6255f
};
static const float glorentz22[4] = {
0.0143f, 0.0316f, 0.1155f, 0.6031f
};
static const float glorentz23[4] = {
0.0153f, 0.0337f, 0.1213f, 0.5803f
};
static const float glorentz24[4] = {
0.0163f, 0.0358f, 0.1270f, 0.5570f
};
static const float glorentz25[4] = {
0.0174f, 0.0381f, 0.1325f, 0.5333f
};
static const float glorentz26[4] = {
0.0186f, 0.0405f, 0.1378f, 0.5095f
};
static const float glorentz27[5] = {
0.0113f, 0.0198f, 0.0429f, 0.1428f, 0.4855f
};
static const float glorentz28[5] = {
0.0120f, 0.0211f, 0.0455f, 0.1473f, 0.4615f
};
static const float glorentz29[5] = {
0.0129f, 0.0225f, 0.0481f, 0.1514f, 0.4376f
};
static const float glorentz30[5] = {
0.0137f, 0.0239f, 0.0508f, 0.1549f, 0.4140f
};
static const float glorentz31[6] = {
0.0095f, 0.0147f, 0.0254f, 0.0536f, 0.1578f, 0.3907f
};
static const float glorentz32[6] = {
0.0101f, 0.0156f, 0.0270f, 0.0564f, 0.1600f, 0.3680f
};
static const float glorentz33[7] = {
0.0076f, 0.0109f, 0.0167f, 0.0287f, 0.0592f, 0.1614f, 0.3458f
};
static const float glorentz34[7] = {
0.0081f, 0.0116f, 0.0178f, 0.0305f, 0.0621f, 0.1620f, 0.3243f
};
static const float glorentz35[7] = {
0.0087f, 0.0124f, 0.0190f, 0.0324f, 0.0649f, 0.1618f, 0.3035f
};
static const float glorentz36[8] = {
0.0069f, 0.0093f, 0.0133f, 0.0203f, 0.0343f, 0.0676f, 0.1607f, 0.2836f
};
static const float glorentz37[8] = {
0.0074f, 0.0100f, 0.0142f, 0.0216f, 0.0362f, 0.0702f, 0.1588f, 0.2645f
};
static const float glorentz38[9] = {
0.0061f, 0.0080f, 0.0107f, 0.0152f, 0.0230f, 0.0382f, 0.0726f, 0.1561f, 
0.2464f
};
static const float glorentz39[10] = {
0.0052f, 0.0066f, 0.0086f, 0.0115f, 0.0162f, 0.0244f, 0.0402f, 0.0747f, 
0.1526f, 0.2291f
};
static const float glorentz40[10] = {
0.0056f, 0.0071f, 0.0092f, 0.0123f, 0.0173f, 0.0259f, 0.0422f, 0.0766f, 
0.1484f, 0.2128f
};
static const float glorentz41[11] = {
0.0049f, 0.0061f, 0.0076f, 0.0098f, 0.0132f, 0.0184f, 0.0274f, 0.0441f, 
0.0780f, 0.1437f, 0.1975f
};
static const float glorentz42[12] = {
0.0044f, 0.0053f, 0.0065f, 0.0082f, 0.0106f, 0.0141f, 0.0196f, 0.0290f, 
0.0460f, 0.0791f, 0.1384f, 0.1831f
};
static const float glorentz43[13] = {
0.0040f, 0.0048f, 0.0057f, 0.0070f, 0.0088f, 0.0113f, 0.0150f, 0.0209f, 
0.0305f, 0.0477f, 0.0797f, 0.1327f, 0.1695f
};
static const float glorentz44[14] = {
0.0037f, 0.0043f, 0.0051f, 0.0062f, 0.0075f, 0.0094f, 0.0121f, 0.0160f, 
0.0221f, 0.0321f, 0.0493f, 0.0799f, 0.1267f, 0.1568f
};
static const float glorentz45[15] = {
0.0035f, 0.0040f, 0.0047f, 0.0055f, 0.0066f, 0.0081f, 0.0101f, 0.0129f, 
0.0171f, 0.0234f, 0.0335f, 0.0506f, 0.0795f, 0.1204f, 0.1450f
};
static const float glorentz46[16] = {
0.0033f, 0.0037f, 0.0043f, 0.0050f, 0.0059f, 0.0071f, 0.0087f, 0.0108f, 
0.0138f, 0.0181f, 0.0246f, 0.0349f, 0.0517f, 0.0786f, 0.1141f, 0.1340f
};
static const float glorentz47[17] = {
0.0031f, 0.0035f, 0.0040f, 0.0046f, 0.0054f, 0.0064f, 0.0077f, 0.0093f, 
0.0116f, 0.0147f, 0.0192f, 0.0259f, 0.0362f, 0.0525f, 0.0773f, 0.1076f, 
0.1237f
};
static const float glorentz48[19] = {
0.0027f, 0.0030f, 0.0034f, 0.0038f, 0.0043f, 0.0050f, 0.0058f, 0.0069f, 
0.0082f, 0.0100f, 0.0123f, 0.0156f, 0.0203f, 0.0271f, 0.0374f, 0.0530f, 
0.0755f, 0.1013f, 0.1141f
};
static const float glorentz49[20] = {
0.0026f, 0.0029f, 0.0032f, 0.0036f, 0.0041f, 0.0047f, 0.0054f, 0.0063f, 
0.0074f, 0.0088f, 0.0107f, 0.0131f, 0.0165f, 0.0213f, 0.0282f, 0.0383f, 
0.0531f, 0.0734f, 0.0950f, 0.1053f
};
static const float glorentz50[22] = {
0.0023f, 0.0025f, 0.0028f, 0.0031f, 0.0035f, 0.0039f, 0.0044f, 0.0050f, 
0.0058f, 0.0067f, 0.0079f, 0.0094f, 0.0114f, 0.0139f, 0.0175f, 0.0223f, 
0.0292f, 0.0391f, 0.0529f, 0.0709f, 0.0889f, 0.0971f
};
static const float glorentz51[23] = {
0.0023f, 0.0025f, 0.0027f, 0.0030f, 0.0034f, 0.0037f, 0.0042f, 0.0048f, 
0.0054f, 0.0062f, 0.0072f, 0.0085f, 0.0100f, 0.0121f, 0.0148f, 0.0184f, 
0.0233f, 0.0301f, 0.0396f, 0.0524f, 0.0681f, 0.0829f, 0.0894f
};
static const float glorentz52[25] = {
0.0021f, 0.0023f, 0.0025f, 0.0027f, 0.0030f, 0.0033f, 0.0036f, 0.0040f, 
0.0045f, 0.0051f, 0.0058f, 0.0067f, 0.0077f, 0.0090f, 0.0107f, 0.0128f, 
0.0156f, 0.0192f, 0.0242f, 0.0308f, 0.0398f, 0.0515f, 0.0650f, 0.0772f, 
0.0824f
};
static const float glorentz53[27] = {
0.0019f, 0.0021f, 0.0022f, 0.0024f, 0.0027f, 0.0029f, 0.0032f, 0.0035f, 
0.0039f, 0.0044f, 0.0049f, 0.0055f, 0.0062f, 0.0072f, 0.0083f, 0.0096f, 
0.0113f, 0.0135f, 0.0164f, 0.0201f, 0.0249f, 0.0314f, 0.0398f, 0.0502f, 
0.0619f, 0.0718f, 0.0759f
};
static const float glorentz54[30] = {
0.0017f, 0.0018f, 0.0019f, 0.0021f, 0.0022f, 0.0024f, 0.0026f, 0.0029f, 
0.0031f, 0.0034f, 0.0038f, 0.0042f, 0.0047f, 0.0052f, 0.0059f, 0.0067f, 
0.0076f, 0.0088f, 0.0102f, 0.0120f, 0.0143f, 0.0171f, 0.0208f, 0.0256f, 
0.0317f, 0.0395f, 0.0488f, 0.0586f, 0.0666f, 0.0698f
};
static const float glorentz55[32] = {
0.0016f, 0.0017f, 0.0018f, 0.0019f, 0.0021f, 0.0022f, 0.0024f, 0.0026f, 
0.0028f, 0.0031f, 0.0034f, 0.0037f, 0.0041f, 0.0045f, 0.0050f, 0.0056f, 
0.0063f, 0.0071f, 0.0081f, 0.0094f, 0.0108f, 0.0127f, 0.0149f, 0.0178f, 
0.0214f, 0.0261f, 0.0318f, 0.0389f, 0.0470f, 0.0553f, 0.0618f, 0.0643f
};
static const float glorentz56[35] = {
0.0014f, 0.0015f, 0.0016f, 0.0017f, 0.0018f, 0.0020f, 0.0021f, 0.0023f, 
0.0024f, 0.0026f, 0.0028f, 0.0031f, 0.0033f, 0.0036f, 0.0040f, 0.0044f, 
0.0049f, 0.0054f, 0.0060f, 0.0067f, 0.0076f, 0.0087f, 0.0099f, 0.0114f, 
0.0133f, 0.0156f, 0.0184f, 0.0220f, 0.0264f, 0.0318f, 0.0381f, 0.0451f, 
0.0520f, 0.0572f, 0.0591f
};
static const float glorentz57[38] = {
0.0013f, 0.0014f, 0.0015f, 0.0016f, 0.0017f, 0.0018f, 0.0019f, 0.0020f, 
0.0021f, 0.0023f, 0.0024f, 0.0026f, 0.0028f, 0.0031f, 0.0033f, 0.0036f, 
0.0039f, 0.0043f, 0.0047f, 0.0052f, 0.0058f, 0.0064f, 0.0072f, 0.0081f, 
0.0092f, 0.0104f, 0.0120f, 0.0139f, 0.0162f, 0.0190f, 0.0224f, 0.0265f, 
0.0315f, 0.0371f, 0.0431f, 0.0487f, 0.0529f, 0.0544f
};
static const float glorentz58[41] = {
0.0012f, 0.0013f, 0.0014f, 0.0014f, 0.0015f, 0.0016f, 0.0017f, 0.0018f, 
0.0019f, 0.0020f, 0.0022f, 0.0023f, 0.0025f, 0.0026f, 0.0028f, 0.0030f, 
0.0033f, 0.0036f, 0.0039f, 0.0042f, 0.0046f, 0.0050f, 0.0056f, 0.0061f, 
0.0068f, 0.0076f, 0.0086f, 0.0097f, 0.0110f, 0.0125f, 0.0144f, 0.0167f, 
0.0194f, 0.0226f, 0.0265f, 0.0309f, 0.0359f, 0.0409f, 0.0455f, 0.0488f, 
0.0500f
};
static const float glorentz59[45] = {
0.0011f, 0.0012f, 0.0012f, 0.0013f, 0.0013f, 0.0014f, 0.0015f, 0.0016f, 
0.0016f, 0.0017f, 0.0018f, 0.0019f, 0.0021f, 0.0022f, 0.0023f, 0.0025f, 
0.0026f, 0.0028f, 0.0030f, 0.0033f, 0.0035f, 0.0038f, 0.0041f, 0.0045f, 
0.0049f, 0.0054f, 0.0059f, 0.0065f, 0.0072f, 0.0081f, 0.0090f, 0.0102f, 
0.0115f, 0.0130f, 0.0149f, 0.0171f, 0.0197f, 0.0227f, 0.0263f, 0.0302f, 
0.0345f, 0.0387f, 0.0425f, 0.0451f, 0.0460f
};
static const float glorentz60[49] = {
0.0010f, 0.0011f, 0.0011f, 0.0012f, 0.0012f, 0.0013f, 0.0013f, 0.0014f, 
0.0014f, 0.0015f, 0.0016f, 0.0017f, 0.0018f, 0.0019f, 0.0020f, 0.0021f, 
0.0022f, 0.0024f, 0.0025f, 0.0027f, 0.0028f, 0.0030f, 0.0033f, 0.0035f, 
0.0038f, 0.0041f, 0.0044f, 0.0048f, 0.0052f, 0.0057f, 0.0063f, 0.0069f, 
0.0077f, 0.0085f, 0.0095f, 0.0106f, 0.0119f, 0.0135f, 0.0153f, 0.0174f, 
0.0199f, 0.0227f, 0.0259f, 0.0293f, 0.0330f, 0.0365f, 0.0395f, 0.0415f, 
0.0423f
};
static const float glorentz61[53] = {
0.0009f, 0.0010f, 0.0010f, 0.0011f, 0.0011f, 0.0011f, 0.0012f, 0.0012f, 
0.0013f, 0.0014f, 0.0014f, 0.0015f, 0.0016f, 0.0016f, 0.0017f, 0.0018f, 
0.0019f, 0.0020f, 0.0021f, 0.0023f, 0.0024f, 0.0025f, 0.0027f, 0.0029f, 
0.0031f, 0.0033f, 0.0035f, 0.0038f, 0.0041f, 0.0044f, 0.0047f, 0.0051f, 
0.0056f, 0.0061f, 0.0067f, 0.0073f, 0.0081f, 0.0089f, 0.0099f, 0.0110f, 
0.0124f, 0.0139f, 0.0156f, 0.0176f, 0.0199f, 0.0225f, 0.0253f, 0.0283f, 
0.0314f, 0.0343f, 0.0367f, 0.0383f, 0.0389f
};
static const float glorentz62[57] = {
0.0009f, 0.0009f, 0.0009f, 0.0010f, 0.0010f, 0.0011f, 0.0011f, 0.0011f, 
0.0012f, 0.0012f, 0.0013f, 0.0013f, 0.0014f, 0.0015f, 0.0015f, 0.0016f, 
0.0017f, 0.0018f, 0.0019f, 0.0020f, 0.0021f, 0.0022f, 0.0023f, 0.0024f, 
0.0026f, 0.0027f, 0.0029f, 0.0031f, 0.0033f, 0.0035f, 0.0038f, 0.0040f, 
0.0043f, 0.0047f, 0.0050f, 0.0055f, 0.0059f, 0.0064f, 0.0070f, 0.0077f, 
0.0085f, 0.0093f, 0.0103f, 0.0114f, 0.0127f, 0.0142f, 0.0158f, 0.0177f, 
0.0198f, 0.0221f, 0.0246f, 0.0272f, 0.0297f, 0.0321f, 0.0340f, 0.0353f, 
0.0357f
};
static const float glorentz63[62] = {
0.0008f, 0.0008f, 0.0009f, 0.0009f, 0.0009f, 0.0010f, 0.0010f, 0.0010f, 
0.0011f, 0.0011f, 0.0011f, 0.0012f, 0.0012f, 0.0013f, 0.0013f, 0.0014f, 
0.0015f, 0.0015f, 0.0016f, 0.0017f, 0.0017f, 0.0018f, 0.0019f, 0.0020f, 
0.0021f, 0.0022f, 0.0023f, 0.0025f, 0.0026f, 0.0028f, 0.0029f, 0.0031f, 
0.0033f, 0.0035f, 0.0038f, 0.0040f, 0.0043f, 0.0046f, 0.0050f, 0.0053f, 
0.0058f, 0.0062f, 0.0068f, 0.0074f, 0.0081f, 0.0088f, 0.0097f, 0.0106f, 
0.0117f, 0.0130f, 0.0144f, 0.0159f, 0.0176f, 0.0195f, 0.0216f, 0.0237f, 
0.0259f, 0.0280f, 0.0299f, 0.0315f, 0.0325f, 0.0328f
};
static const float glorentz64[65] = {
0.0008f, 0.0008f, 0.0008f, 0.0009f, 0.0009f, 0.0009f, 0.0010f, 0.0010f, 
0.0010f, 0.0011f, 0.0011f, 0.0012f, 0.0012f, 0.0012f, 0.0013f, 0.0013f, 
0.0014f, 0.0014f, 0.0015f, 0.0016f, 0.0016f, 0.0017f, 0.0018f, 0.0019f, 
0.0020f, 0.0021f, 0.0022f, 0.0023f, 0.0024f, 0.0025f, 0.0027f, 0.0028f, 
0.0030f, 0.0031f, 0.0033f, 0.0035f, 0.0038f, 0.0040f, 0.0043f, 0.0046f, 
0.0049f, 0.0052f, 0.0056f, 0.0061f, 0.0066f, 0.0071f, 0.0077f, 0.0084f, 
0.0091f, 0.0100f, 0.0109f, 0.0120f, 0.0132f, 0.0145f, 0.0159f, 0.0175f, 
0.0192f, 0.0209f, 0.0228f, 0.0246f, 0.0264f, 0.0279f, 0.0291f, 0.0299f, 
0.0301f
};
static const float *gptr_tab_lorentz[64] = {
glorentz1, glorentz2, glorentz3, glorentz4, 
glorentz5, glorentz6, glorentz7, glorentz8, 
glorentz9, glorentz10, glorentz11, glorentz12, 
glorentz13, glorentz14, glorentz15, glorentz16, 
glorentz17, glorentz18, glorentz19, glorentz20, 
glorentz21, glorentz22, glorentz23, glorentz24, 
glorentz25, glorentz26, glorentz27, glorentz28, 
glorentz29, glorentz30, glorentz31, glorentz32, 
glorentz33, glorentz34, glorentz35, glorentz36, 
glorentz37, glorentz38, glorentz39, glorentz40, 
glorentz41, glorentz42, glorentz43, glorentz44, 
glorentz45, glorentz46, glorentz47, glorentz48, 
glorentz49, glorentz50, glorentz51, glorentz52, 
glorentz53, glorentz54, glorentz55, glorentz56, 
glorentz57, glorentz58, glorentz59, glorentz60, 
glorentz61, glorentz62, glorentz63, glorentz64
};