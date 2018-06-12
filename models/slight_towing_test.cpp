#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[33] <= -17.27487521119177) {
        if (features[38] <= 26.11790171149844) {
            classes[0] = 0; 
            classes[1] = 22; 
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    } else {
        if (features[42] <= 3.8515148979599205) {
            if (features[25] <= -22.493489121316692) {
                if (features[19] <= -7.710970074570573) {
                    if (features[40] <= -29.73397367900888) {
                        classes[0] = 0; 
                        classes[1] = 25; 
                    } else {
                        classes[0] = 10; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[4] <= 12.040508422088116) {
                        if (features[22] <= 5.80240068653195) {
                            if (features[0] <= -0.6128516293190662) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 26; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[5] <= 2.2642328917347996) {
                    if (features[33] <= -11.747769266249504) {
                        if (features[9] <= -36.459098670845435) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[21] <= -7.208396335695124) {
                                if (features[5] <= -5.196284469774126) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 54; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[36] <= -0.4226078635186923) {
                            if (features[40] <= 26.9311237218469) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[11] <= 34.1481688820903) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                } else {
                                    classes[0] = 14; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[36] <= 4.4488249628100665) {
                                if (features[2] <= 2.0875444384189383) {
                                    classes[0] = 19; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[19] <= -4.6611128369135) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[42] <= 1.7177795838753758) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[35] <= -7.328418450727296) {
                        if (features[39] <= 2.245928337417464) {
                            classes[0] = 12; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 20; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[7] <= 0.23577771580452378) {
                if (features[9] <= 2.345810904328623) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    if (features[9] <= 11.667212072604901) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[35] <= 3.0707862043021965) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[27] <= 20.663796003188324) {
                    if (features[19] <= 0.29141219823479503) {
                        if (features[8] <= 13.922427977399169) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 10; 
                        }
                    } else {
                        if (features[43] <= -17.416561549782145) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[41] <= -28.668169182105068) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[3] <= 3.7306602892107747) {
                                    if (features[40] <= -4.016949374236608) {
                                        if (features[10] <= 4.23939321219412) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        classes[0] = 34; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 11; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_1(float features[]) {
    int classes[2];
    
    if (features[34] <= 6.7003233338110055) {
        if (features[16] <= 45.72187415776862) {
            if (features[24] <= -32.18162444242352) {
                classes[0] = 0; 
                classes[1] = 32; 
            } else {
                if (features[7] <= -3.0076852288443376) {
                    if (features[22] <= 3.2300709986014597) {
                        if (features[27] <= 36.77558268310119) {
                            classes[0] = 0; 
                            classes[1] = 33; 
                        } else {
                            classes[0] = 23; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 10; 
                    }
                } else {
                    if (features[43] <= 25.21616716574556) {
                        if (features[17] <= -14.686836290493066) {
                            if (features[3] <= 0.2941436148087444) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[35] <= 1.641389763282719) {
                                if (features[18] <= 4.18070030605005) {
                                    classes[0] = 107; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[41] <= -10.389518228540904) {
                                        classes[0] = 34; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[10] <= 7.845231457062042) {
                                    if (features[3] <= 5.018975868582663) {
                                        if (features[35] <= 5.369739894946006) {
                                            if (features[22] <= 6.838671299255202) {
                                                classes[0] = 32; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[20] <= 41.31990409145127) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[33] <= -8.024006202828144) {
                            classes[0] = 0; 
                            classes[1] = 19; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 2; 
        }
    } else {
        if (features[37] <= -8.87336330715258) {
            if (features[4] <= 38.94074671293644) {
                if (features[20] <= 14.648898248862892) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[11] <= -13.117688134399689) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
            }
        } else {
            if (features[2] <= 6.056820322466951) {
                classes[0] = 0; 
                classes[1] = 8; 
            } else {
                if (features[4] <= 40.70575526017032) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                } else {
                    if (features[26] <= 3.6837800574743107) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_2(float features[]) {
    int classes[2];
    
    if (features[5] <= 8.459453929429621) {
        if (features[35] <= -4.873565311098774) {
            if (features[24] <= 4.131628829115826) {
                if (features[24] <= -35.843781192714246) {
                    classes[0] = 0; 
                    classes[1] = 29; 
                } else {
                    if (features[40] <= -33.7747727473149) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 24; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[3] <= -7.06037621115178) {
                    if (features[20] <= 11.464875496674736) {
                        classes[0] = 68; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[8] <= 32.440749196540914) {
                        if (features[6] <= 1.9794053857688918) {
                            if (features[4] <= -3.0915493737401203) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                    }
                }
            }
        } else {
            if (features[39] <= 1.822192329612534) {
                if (features[27] <= -2.8924545500777796) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    if (features[39] <= -2.8872444613843564) {
                        if (features[38] <= 1.763014003907049) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[37] <= -9.850054935482357) {
                                if (features[4] <= -0.02862191387853663) {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                } else {
                                    if (features[42] <= 8.410024751154207) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 20; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            } else {
                if (features[33] <= -14.897409043692708) {
                    classes[0] = 0; 
                    classes[1] = 11; 
                } else {
                    if (features[4] <= 1.8221017559161883) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[39] <= 17.180756986691037) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        } else {
                            if (features[26] <= 3.9415799765011794) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[26] <= 5.835515891555693) {
            if (features[40] <= -43.225884455827014) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[32] <= 43.114049443562536) {
                    if (features[5] <= 22.314012871270073) {
                        if (features[43] <= 25.944151309227642) {
                            if (features[11] <= -12.841553496090786) {
                                if (features[23] <= 24.185739101911864) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 77; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            }
        } else {
            if (features[18] <= 3.257914821440538) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[42] <= 5.151075733470575) {
                    if (features[32] <= 9.59334225654292) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_3(float features[]) {
    int classes[2];
    
    if (features[16] <= 9.992241241965555) {
        if (features[21] <= 8.459708659192408) {
            if (features[24] <= -39.147343585801934) {
                classes[0] = 0; 
                classes[1] = 22; 
            } else {
                if (features[9] <= -28.997776866423795) {
                    classes[0] = 0; 
                    classes[1] = 16; 
                } else {
                    if (features[25] <= 35.063529291685455) {
                        if (features[8] <= 8.83384421134081) {
                            if (features[37] <= -22.709091407577084) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 54; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[0] <= -0.23473896469675903) {
                                if (features[20] <= 2.363504941744499) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                } else {
                                    if (features[7] <= -4.130216057197567) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[7] <= 6.139381387696567) {
                                            classes[0] = 40; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                }
                            } else {
                                if (features[39] <= 3.426718059806218) {
                                    if (features[32] <= 11.37690880865646) {
                                        if (features[25] <= 30.68991859196216) {
                                            classes[0] = 0; 
                                            classes[1] = 21; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 18; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 4; 
        }
    } else {
        if (features[21] <= -18.240446020961016) {
            if (features[17] <= -7.320546898674479) {
                if (features[32] <= 20.231558447811548) {
                    if (features[39] <= 21.863875640463114) {
                        if (features[16] <= 24.382217902868156) {
                            if (features[16] <= 15.432090753424955) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
            }
        } else {
            if (features[35] <= -0.5720386158672266) {
                if (features[19] <= -0.9800885118706972) {
                    classes[0] = 0; 
                    classes[1] = 11; 
                } else {
                    if (features[1] <= -2.414658594138295) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[39] <= 10.705083809285135) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[37] <= 8.669078929661346) {
                        if (features[24] <= -0.21077931123356386) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[19] <= 2.5942984225983765) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[36] <= 62.36166833078566) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[27] <= -13.699454576341877) {
                            if (features[43] <= -12.644451940518445) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[41] <= -15.464260603983076) {
                                if (features[21] <= 12.298138411854458) {
                                    classes[0] = 51; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 26; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_4(float features[]) {
    int classes[2];
    
    if (features[34] <= 5.632490433538057) {
        if (features[9] <= 33.073160762467026) {
            if (features[26] <= 4.796167367694264) {
                if (features[21] <= -7.3437387325538985) {
                    if (features[9] <= 20.607320205591307) {
                        if (features[19] <= -8.261282915229337) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        } else {
                            if (features[3] <= -4.474013247024709) {
                                if (features[42] <= 6.016962918712313) {
                                    if (features[5] <= -10.918182895015079) {
                                        classes[0] = 0; 
                                        classes[1] = 13; 
                                    } else {
                                        if (features[40] <= 18.10052492008569) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[38] <= 2.2978955402918455) {
                            if (features[5] <= -9.64151117095794) {
                                if (features[10] <= 2.1597477541806) {
                                    if (features[7] <= -6.993414391674938) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    if (features[25] <= -33.737080457497896) {
                        classes[0] = 0; 
                        classes[1] = 17; 
                    } else {
                        if (features[2] <= 1.9656610330262771) {
                            classes[0] = 85; 
                            classes[1] = 0; 
                        } else {
                            if (features[32] <= 9.684027991110472) {
                                if (features[27] <= 19.700430481616124) {
                                    if (features[2] <= 3.721996999024179) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[18] <= 4.936700231911067) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[11] <= 0.5292608187619585) {
                                    classes[0] = 56; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[7] <= 13.410559649043854) {
                    if (features[36] <= 1.5838892262353976) {
                        classes[0] = 0; 
                        classes[1] = 18; 
                    } else {
                        if (features[19] <= -1.8342970828147394) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[26] <= 5.818188660558682) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[10] <= 4.169740101766885) {
                        if (features[5] <= 17.824190619319765) {
                            classes[0] = 10; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    } else {
                        if (features[8] <= 3.7642430960034226) {
                            if (features[11] <= -12.230067568259745) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    }
                }
            }
        } else {
            classes[0] = 18; 
            classes[1] = 0; 
        }
    } else {
        if (features[43] <= 17.92075684087358) {
            if (features[3] <= -1.9460728393910003) {
                classes[0] = 0; 
                classes[1] = 15; 
            } else {
                if (features[11] <= -11.250875570387155) {
                    if (features[24] <= -9.532098355485171) {
                        if (features[40] <= -6.265034792136883) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            if (features[43] <= -16.73336925342478) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[18] <= 10.831514793675261) {
                            if (features[3] <= 1.5412786167663566) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                            } else {
                                if (features[4] <= 30.770008796253244) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[9] <= -1.8007953808646633) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 10; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 2; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict (float features[]) {
    int n_classes = 2;
    int classes[n_classes];
    int i;
    for (i = 0; i < n_classes; i++) {
        classes[i] = 0;
    }

    classes[predict_0(features)]++;
    classes[predict_1(features)]++;
    classes[predict_2(features)]++;
    classes[predict_3(features)]++;
    classes[predict_4(features)]++;

    int class_idx = 0;
    int class_val = classes[0];
    for (i = 1; i < n_classes; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int main(int argc, const char * argv[]) {
    float features[argc-1];
    int i;
    for (i = 1; i < argc; i++) {
        features[i-1] = atof(argv[i]);
    }
    printf("%d", predict(features));
    return 0;
}