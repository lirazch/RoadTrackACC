#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[22] <= 18.835001772057012) {
        if (features[5] <= -54.016233569949975) {
            if (features[16] <= -25.80498923817882) {
                if (features[25] <= -71.85421077527768) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[16] <= -5.917173824234481) {
                    if (features[14] <= 3.3923986575241045) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            }
        } else {
            if (features[25] <= -175.37690965429738) {
                classes[0] = 0; 
                classes[1] = 6; 
            } else {
                if (features[10] <= 13.063873934943555) {
                    if (features[19] <= -8.996605803709578) {
                        if (features[19] <= -20.601581360059534) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[33] <= -27.39167832927391) {
                                if (features[20] <= -9.1958684293534) {
                                    if (features[9] <= -47.50679682544749) {
                                        classes[0] = 1; 
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
                                classes[0] = 8; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[30] <= 11.255752256384193) {
                            if (features[15] <= 8.602981776909616) {
                                if (features[2] <= 30.3439944779225) {
                                    if (features[14] <= 41.90692790778641) {
                                        if (features[17] <= -15.29079095986243) {
                                            if (features[2] <= 10.97794492461831) {
                                                if (features[13] <= -54.386525024839926) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    if (features[2] <= 8.797467566554484) {
                                                        if (features[30] <= 8.234856357613333) {
                                                            if (features[6] <= 9.251178310667283) {
                                                                classes[0] = 0; 
                                                                classes[1] = 3; 
                                                            } else {
                                                                if (features[25] <= -10.428337683169328) {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                }
                                                            }
                                                        } else {
                                                            if (features[8] <= 15.870680984049422) {
                                                                classes[0] = 2; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[6] <= 10.298809952969858) {
                                                    classes[0] = 6; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        } else {
                                            if (features[10] <= 8.763507433140076) {
                                                if (features[16] <= 25.574789006996337) {
                                                    if (features[13] <= -25.002253773157605) {
                                                        if (features[23] <= -11.961958990217084) {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        if (features[2] <= 4.730733794770537) {
                                                            if (features[31] <= -3.2214530275189572) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 24; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 22; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 16; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[2] <= 13.475095325843427) {
                                                    if (features[25] <= -78.66954565731322) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        if (features[24] <= 16.66554643989799) {
                                                            classes[0] = 7; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[9] <= -29.963310328295133) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 6; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 6; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                if (features[22] <= 11.122422469181092) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            }
                        } else {
                            if (features[13] <= -49.92904441707256) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[24] <= 140.5673359635134) {
                                    if (features[24] <= 57.233401468598004) {
                                        if (features[31] <= -1.2394357958051927) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[34] <= 10.617938177687538) {
                                                classes[0] = 9; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[35] <= -13.81227487547445) {
                                                    if (features[30] <= 24.410857159165204) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    classes[0] = 6; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[21] <= 9.394159163066263) {
                        if (features[10] <= 29.4581882685978) {
                            if (features[8] <= -2.5272726540115045) {
                                if (features[11] <= -59.42381516813789) {
                                    if (features[27] <= 1.1636418427290776) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[33] <= 8.76708161680358) {
                                    if (features[29] <= -5.65522172565349) {
                                        if (features[22] <= 6.160181898437535) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                        } else {
                                            if (features[26] <= 27.801034176721323) {
                                                if (features[33] <= -53.903321142263394) {
                                                    if (features[26] <= 7.813611658277028) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 5; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 6; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
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
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[16] <= 51.60913144592621) {
            if (features[33] <= -40.28009496642281) {
                if (features[26] <= 12.613861453747795) {
                    if (features[3] <= -6.373833935759426) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 17; 
                }
            } else {
                if (features[30] <= 6.818059737695693) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            }
        } else {
            if (features[7] <= 22.92364382775675) {
                if (features[7] <= 20.835954499738747) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[1] <= -89.15620606446461) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[13] <= -99.19113488085155) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    if (features[6] <= 34.48162414806251) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
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

int predict_1(float features[]) {
    int classes[2];
    
    if (features[34] <= 31.81581991030958) {
        if (features[11] <= 25.269472006412315) {
            if (features[24] <= 40.77532481251998) {
                if (features[13] <= -239.80801264746486) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    if (features[12] <= 117.72834217256323) {
                        if (features[26] <= 21.938785024617605) {
                            if (features[23] <= 13.967932435981282) {
                                if (features[1] <= -127.96716294622382) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    if (features[19] <= 4.649419454416048) {
                                        if (features[0] <= 100.97952042379394) {
                                            if (features[33] <= -68.66182415776971) {
                                                if (features[10] <= 10.933453019491083) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                if (features[27] <= -0.24011306085757944) {
                                                    if (features[15] <= 0.39491933043809624) {
                                                        if (features[35] <= -7.971406868349035) {
                                                            classes[0] = 12; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[13] <= -56.83855167442865) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                if (features[1] <= -22.678914214800535) {
                                                                    classes[0] = 5; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    if (features[22] <= 6.656887674988809) {
                                                                        classes[0] = 3; 
                                                                        classes[1] = 0; 
                                                                    } else {
                                                                        classes[0] = 0; 
                                                                        classes[1] = 1; 
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (features[28] <= 47.7170851974362) {
                                                            if (features[16] <= 15.14151941199858) {
                                                                if (features[33] <= -9.554775320717495) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 2; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[1] <= -68.4185464644891) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        if (features[4] <= 33.18976503479749) {
                                                            if (features[34] <= 21.06969351366941) {
                                                                if (features[1] <= -0.555343983953513) {
                                                                    if (features[14] <= 62.55285210166188) {
                                                                        if (features[14] <= 13.92561779402228) {
                                                                            if (features[34] <= 7.323539252514804) {
                                                                                if (features[33] <= -41.78875411571411) {
                                                                                    classes[0] = 0; 
                                                                                    classes[1] = 1; 
                                                                                } else {
                                                                                    classes[0] = 6; 
                                                                                    classes[1] = 0; 
                                                                                }
                                                                            } else {
                                                                                classes[0] = 5; 
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
                                                                    classes[0] = 7; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 3; 
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[1] <= -51.57790622468009) {
                                            if (features[18] <= 31.459787711288186) {
                                                if (features[13] <= -15.64724549075926) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[28] <= 1.0194373340436425) {
                                                if (features[21] <= -21.86092974890998) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[15] <= 3.3962359789325376) {
                                                    if (features[30] <= 22.091104944757763) {
                                                        classes[0] = 31; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[26] <= 10.958535195567746) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[6] <= 21.216532754031135) {
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
                                }
                            } else {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            } else {
                if (features[10] <= 13.449192391257064) {
                    if (features[2] <= 40.08844463143997) {
                        if (features[18] <= 15.800572805712742) {
                            if (features[23] <= -32.81292956551309) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                if (features[15] <= 2.7030314379241105) {
                                    if (features[22] <= 14.776032850417996) {
                                        if (features[31] <= -1.4611485481614963) {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                        } else {
                                            if (features[24] <= 53.40811007162934) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                } else {
                    if (features[19] <= 18.981923126140742) {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    } else {
                        if (features[24] <= 180.8488943599392) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    }
                }
            }
        } else {
            if (features[7] <= -78.80677500690362) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[1] <= -120.17077397935594) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[25] <= -63.04315191090254) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[22] <= 4.079024346450689) {
                            if (features[29] <= -13.878264154250857) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[25] <= -30.04333350343785) {
                                if (features[35] <= 38.57966523776604) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[12] <= 33.76898849651636) {
                                        if (features[14] <= 7.1525364518263475) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[35] <= 20.693732599842328) {
                                    if (features[19] <= -6.8676520238735534) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 25; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 17; 
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
    
    if (features[25] <= -160.5856427292273) {
        classes[0] = 0; 
        classes[1] = 18; 
    } else {
        if (features[11] <= 2.1086336937915746) {
            if (features[24] <= 151.58532752636137) {
                if (features[35] <= -36.405199410416245) {
                    if (features[17] <= -7.339880149504111) {
                        if (features[34] <= 20.522999194025157) {
                            if (features[21] <= -67.00416604010582) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[5] <= -6.7485195075853355) {
                                    if (features[20] <= -13.299125265935029) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[32] <= -34.42177613937379) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        } else {
                                            if (features[19] <= 4.633775340023179) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        classes[0] = 21; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[33] <= -34.68213802328433) {
                        if (features[4] <= 117.28285694927109) {
                            if (features[2] <= 14.85170854945732) {
                                if (features[15] <= -8.389898074313017) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[10] <= 15.224246423741993) {
                                        if (features[24] <= 94.27567044751517) {
                                            if (features[24] <= 48.24191820446491) {
                                                if (features[34] <= 4.383828292403005) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[4] <= 66.6730377314021) {
                                                        if (features[0] <= 23.320301860254396) {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[1] <= -16.09391927909754) {
                                                                if (features[16] <= 31.674011202377272) {
                                                                    if (features[28] <= 56.499120358610114) {
                                                                        classes[0] = 2; 
                                                                        classes[1] = 0; 
                                                                    } else {
                                                                        classes[0] = 0; 
                                                                        classes[1] = 1; 
                                                                    }
                                                                } else {
                                                                    classes[0] = 3; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    } else {
                                                        if (features[31] <= 33.1427279368673) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[25] <= -25.174781565170164) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[27] <= 3.1408283051043426) {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[5] <= -41.86352179286234) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    if (features[10] <= 11.816915188258404) {
                                        if (features[24] <= 43.38119380147252) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        if (features[7] <= 34.12816909916674) {
                                            if (features[16] <= 33.95740901956214) {
                                                if (features[20] <= -43.66015009379953) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 13; 
                                            }
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    } else {
                        if (features[12] <= 145.05112657744957) {
                            if (features[24] <= 22.966992046202996) {
                                if (features[34] <= 13.43101081473837) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[0] <= 38.07351459286805) {
                                    if (features[28] <= 33.328765756138026) {
                                        if (features[34] <= 10.842967909151714) {
                                            if (features[21] <= -30.440515087191255) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[9] <= -32.7492561921241) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 11; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[1] <= -78.41077100411559) {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            if (features[18] <= 17.57767023632337) {
                if (features[24] <= 101.3656940485191) {
                    if (features[0] <= 38.04343589304175) {
                        if (features[10] <= 4.568748356619048) {
                            if (features[17] <= -8.559528289623339) {
                                if (features[27] <= -5.388495787151026) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[26] <= 22.925218513051398) {
                                if (features[35] <= -2.592069191721098) {
                                    if (features[27] <= -0.8098239754400367) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[2] <= 5.2742007504331205) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                } else {
                                    if (features[19] <= -36.70795773628542) {
                                        if (features[22] <= 5.479834192861135) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[12] <= 36.934364492508756) {
                                            if (features[28] <= 12.724433943966606) {
                                                if (features[5] <= -13.833184881989467) {
                                                    if (features[24] <= 12.45838858208544) {
                                                        if (features[19] <= -13.711963268193799) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[10] <= 7.713159027392241) {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 7; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 27; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 25; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[21] <= -6.544135314665798) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
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
                        }
                    } else {
                        if (features[30] <= 14.414401308075782) {
                            if (features[27] <= 1.8462093102069428) {
                                if (features[8] <= 33.79864467577946) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
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
    
    if (features[3] <= -13.697725219570525) {
        if (features[1] <= -119.34147680520152) {
            classes[0] = 0; 
            classes[1] = 6; 
        } else {
            if (features[20] <= 7.6144150940768505) {
                classes[0] = 3; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[26] <= 28.03266116522791) {
            if (features[23] <= -7.516343719205935) {
                if (features[3] <= -6.623838429805251) {
                    if (features[20] <= -6.139666889859207) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[1] <= -43.711476957291126) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[2] <= 31.791818490959255) {
                        if (features[27] <= -2.2748085068270614) {
                            if (features[22] <= 30.13034240939443) {
                                if (features[2] <= 18.029684247713035) {
                                    if (features[1] <= -22.07955045349875) {
                                        if (features[20] <= 55.93706407953849) {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
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
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            if (features[9] <= -20.19944255435813) {
                                if (features[7] <= 24.457859710411995) {
                                    if (features[21] <= -122.86242086201088) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[29] <= -56.92270137226335) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[27] <= -0.8199096318242274) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[9] <= -42.580983602712394) {
                                                    if (features[32] <= 8.422388466271755) {
                                                        if (features[8] <= -19.76306036289924) {
                                                            if (features[3] <= 1.7750153179247627) {
                                                                classes[0] = 2; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 3; 
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                } else {
                                                    if (features[11] <= -1.567072415748811) {
                                                        if (features[11] <= -9.962093282282346) {
                                                            if (features[7] <= 5.570793000226914) {
                                                                classes[0] = 5; 
                                                                classes[1] = 0; 
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
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        if (features[30] <= 25.916722854301586) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        } else {
                            if (features[0] <= 136.2184363846753) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                }
            } else {
                if (features[26] <= 24.965013237062145) {
                    if (features[34] <= 14.411070143245539) {
                        if (features[17] <= -8.152377978038217) {
                            if (features[30] <= 12.26806745674557) {
                                if (features[18] <= 12.890282649914155) {
                                    if (features[1] <= -6.970023620394073) {
                                        if (features[25] <= -3.6036187240870774) {
                                            if (features[15] <= 1.004914264794662) {
                                                if (features[4] <= 16.217642160233876) {
                                                    if (features[30] <= 6.327988016785245) {
                                                        classes[0] = 7; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[27] <= 0.18656024868797605) {
                                                            if (features[10] <= 4.446377959438576) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                if (features[6] <= 7.315676614641087) {
                                                                    classes[0] = 4; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    if (features[17] <= -26.9074197965243) {
                                                                        classes[0] = 2; 
                                                                        classes[1] = 0; 
                                                                    } else {
                                                                        if (features[22] <= 11.028854968832922) {
                                                                            classes[0] = 0; 
                                                                            classes[1] = 2; 
                                                                        } else {
                                                                            classes[0] = 1; 
                                                                            classes[1] = 0; 
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 13; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[30] <= 7.867994233671717) {
                                                    if (features[11] <= 27.33652454690949) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[34] <= 5.05150418566418) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[3] <= 1.5151083773014364) {
                                                        if (features[17] <= -14.248232626471776) {
                                                            if (features[26] <= 5.27808155040607) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 3; 
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
                                                }
                                            }
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[7] <= 21.0691053391988) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[10] <= 25.49438783962971) {
                                    if (features[9] <= -0.3952269015811538) {
                                        if (features[26] <= 12.514302866804348) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[2] <= 34.92047956549635) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 34; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[7] <= 21.61626299815387) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            if (features[27] <= -4.821063504110702) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[32] <= 42.05142638741593) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            }
        } else {
            if (features[26] <= 58.823430568982616) {
                if (features[18] <= 6.215521063922188) {
                    if (features[9] <= -51.425308782339705) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 26; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 17; 
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
    
    if (features[9] <= -106.7831253440972) {
        if (features[34] <= 25.150954234578617) {
            if (features[2] <= 24.123042355670435) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 7; 
        }
    } else {
        if (features[17] <= 3.237250195460973) {
            if (features[9] <= -49.91409622594439) {
                if (features[20] <= 15.121065673940379) {
                    if (features[20] <= 6.033471249990853) {
                        if (features[25] <= -47.85554063127168) {
                            if (features[13] <= -51.732895661021075) {
                                if (features[33] <= -54.66840384652298) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[28] <= 59.422901915117585) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                } else {
                                    if (features[35] <= -36.67411952975989) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[13] <= -71.145301932071) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[23] <= -37.612899332834395) {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                } else {
                    if (features[15] <= -3.1580746802549005) {
                        if (features[7] <= 20.487117574560354) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            if (features[13] <= -85.0516857509742) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    } else {
                        if (features[21] <= -78.90269873798951) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[11] <= -42.08279278639476) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        }
                    }
                }
            } else {
                if (features[21] <= -18.888965028752096) {
                    if (features[28] <= 6.809410463464175) {
                        if (features[6] <= 9.623558326355635) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        }
                    } else {
                        if (features[13] <= -66.83594011461173) {
                            if (features[35] <= -32.37773921619728) {
                                if (features[12] <= 98.60531992959106) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 15; 
                            }
                        } else {
                            if (features[32] <= 19.60771633852633) {
                                if (features[1] <= -64.37169990892136) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    if (features[19] <= -67.44050705662397) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[28] <= 45.09521526708045) {
                                            if (features[28] <= 25.874020832532096) {
                                                if (features[8] <= 27.407331427283268) {
                                                    if (features[7] <= 3.2189914620263522) {
                                                        if (features[11] <= -18.197172170953785) {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        } else {
                                                            classes[0] = 4; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 5; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 7; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[28] <= 70.97982353297054) {
                                                classes[0] = 0; 
                                                classes[1] = 3; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 12; 
                            }
                        }
                    }
                } else {
                    if (features[5] <= -110.86540441720999) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[32] <= 48.280738357585264) {
                            if (features[1] <= -68.52788077505673) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                if (features[9] <= -22.157957351840082) {
                                    if (features[25] <= -128.8163771540003) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[11] <= -0.13917044854035332) {
                                            if (features[5] <= -14.043838928474038) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[1] <= -14.39802631661204) {
                                                    classes[0] = 4; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[6] <= 7.319061032200489) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= 7.7339767836431115) {
                                        if (features[17] <= -29.98089964035009) {
                                            if (features[32] <= 29.869940766072805) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[19] <= -7.48968985887981) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        } else {
                                            if (features[17] <= -13.717228057662597) {
                                                if (features[24] <= 59.93434253518206) {
                                                    classes[0] = 8; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                if (features[21] <= 3.749217484029577) {
                                                    if (features[1] <= -17.054496005668536) {
                                                        classes[0] = 13; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[10] <= 7.176638887161575) {
                                                            classes[0] = 10; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[2] <= 6.794418295407094) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 23; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[11] <= 43.04630072641339) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[24] <= 46.869956558044045) {
                                if (features[0] <= 18.957106749972844) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[31] <= -11.940144401211427) {
                                        if (features[35] <= 57.14704186686647) {
                                            if (features[4] <= -37.13761951454804) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[9] <= 0.4747583439921783) {
                                    if (features[32] <= 66.82291567643308) {
                                        if (features[8] <= 37.51293622772812) {
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
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[25] <= -147.00365939503706) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[25] <= -56.90570352082406) {
                    if (features[22] <= 6.828311813887346) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                } else {
                    if (features[20] <= 21.834835934375803) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        if (features[17] <= 13.895012442904996) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[26] <= 9.787082356960381) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 1; 
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