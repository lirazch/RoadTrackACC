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

int predict_5(float features[]) {
    int classes[2];
    
    if (features[27] <= 16.763740134098903) {
        if (features[1] <= -110.84127391820834) {
            classes[0] = 0; 
            classes[1] = 37; 
        } else {
            if (features[29] <= -23.87066170194683) {
                if (features[24] <= 151.55182379090778) {
                    if (features[13] <= -272.24098951380745) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[13] <= -173.02467457439036) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[5] <= -64.05794235135333) {
                                if (features[10] <= 8.59277780713245) {
                                    if (features[1] <= -23.969325100988765) {
                                        classes[0] = 1; 
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
                                if (features[24] <= 43.06416360804074) {
                                    if (features[13] <= -52.62557282514199) {
                                        if (features[28] <= 55.07419764021141) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= -76.60676406910957) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[31] <= -10.860274434462973) {
                                                if (features[7] <= -31.636220863479316) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[14] <= 5.057024906464644) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        if (features[1] <= -54.83675128726138) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            if (features[35] <= -5.284434251215764) {
                                                                classes[0] = 3; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                if (features[16] <= 27.172647090243476) {
                                                                    classes[0] = 4; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    if (features[17] <= 9.086616674944114) {
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
                                            } else {
                                                if (features[16] <= 24.186545709234913) {
                                                    if (features[15] <= 3.5579983089329215) {
                                                        if (features[6] <= 6.142788468966048) {
                                                            if (features[14] <= 6.083899050322213) {
                                                                classes[0] = 2; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        } else {
                                                            if (features[24] <= 13.180150308264489) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                if (features[17] <= -17.86089620080818) {
                                                                    if (features[10] <= 10.805568032113712) {
                                                                        if (features[9] <= -38.14925300616271) {
                                                                            classes[0] = 0; 
                                                                            classes[1] = 1; 
                                                                        } else {
                                                                            classes[0] = 4; 
                                                                            classes[1] = 0; 
                                                                        }
                                                                    } else {
                                                                        classes[0] = 3; 
                                                                        classes[1] = 0; 
                                                                    }
                                                                } else {
                                                                    classes[0] = 8; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                } else {
                                                    classes[0] = 12; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (features[24] <= 102.05376941992611) {
                                        if (features[4] <= 14.603233517428503) {
                                            if (features[28] <= 35.22234292105881) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[3] <= -2.302393359760171) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            }
                                        } else {
                                            if (features[34] <= 20.950953725360172) {
                                                classes[0] = 0; 
                                                classes[1] = 5; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 16; 
                }
            } else {
                if (features[5] <= -2.008060908880111) {
                    if (features[4] <= 27.777674212948266) {
                        if (features[24] <= 49.109313799584896) {
                            if (features[32] <= 14.929918422796725) {
                                if (features[8] <= 14.994199679696095) {
                                    if (features[4] <= 2.010647826833021) {
                                        if (features[1] <= -3.99898991174949) {
                                            if (features[25] <= -7.415470041062434) {
                                                if (features[20] <= -22.353311854579164) {
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
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[12] <= 79.64396228065898) {
                                            if (features[3] <= -2.132722355920535) {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[30] <= 5.826447556470669) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[10] <= 6.9630315103939) {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[22] <= 15.940077333471551) {
                                                            if (features[7] <= -2.620986626231271) {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            } else {
                                                                if (features[17] <= -25.573590065154058) {
                                                                    classes[0] = 2; 
                                                                    classes[1] = 0; 
                                                                } else {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 2; 
                                                                }
                                                            }
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
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
                                    classes[1] = 2; 
                                }
                            } else {
                                if (features[14] <= 17.37689976713914) {
                                    classes[0] = 23; 
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
                        if (features[31] <= 27.417020672711033) {
                            if (features[11] <= 2.6111843703854376) {
                                if (features[19] <= 20.774979825619646) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                } else {
                                    if (features[33] <= -55.14260597859631) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[25] <= -140.17828244537966) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[14] <= 6.680867385624105) {
                            if (features[22] <= 9.458068481875689) {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            }
                        } else {
                            classes[0] = 27; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 2; 
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

int predict_6(float features[]) {
    int classes[2];
    
    if (features[30] <= 18.332338041277193) {
        if (features[18] <= 9.816952613849192) {
            if (features[26] <= 48.30873636501415) {
                if (features[0] <= 7.017315480400489) {
                    classes[0] = 21; 
                    classes[1] = 0; 
                } else {
                    if (features[2] <= 53.867020159503326) {
                        if (features[17] <= 17.60838732198272) {
                            if (features[1] <= -7.580273892535018) {
                                if (features[23] <= -5.1331208091378855) {
                                    if (features[30] <= 16.13349217559108) {
                                        if (features[15] <= -2.298979346192441) {
                                            if (features[18] <= 5.984057330669929) {
                                                if (features[23] <= -26.362849313103215) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 14; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            if (features[7] <= 0.48150834350202043) {
                                                if (features[6] <= 7.964767324344661) {
                                                    if (features[17] <= -12.437827583606275) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 4; 
                                                }
                                            } else {
                                                if (features[1] <= -14.606746702737523) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                } else {
                                    if (features[11] <= -9.632906277844452) {
                                        if (features[7] <= 5.134958940203978) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[25] <= -17.929198977504484) {
                                            if (features[23] <= 25.905776897199484) {
                                                if (features[8] <= 34.228712086672296) {
                                                    if (features[12] <= 12.960553335473199) {
                                                        classes[0] = 5; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[16] <= 8.883611355388355) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 16; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[21] <= 19.94780440998627) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[25] <= -47.26385676081472) {
                                                        if (features[10] <= 2.652964180927413) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        } else {
                                            if (features[0] <= 46.52545021219433) {
                                                if (features[29] <= -15.185163758315689) {
                                                    if (features[34] <= 4.873606205007938) {
                                                        if (features[4] <= 8.944907246597534) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        if (features[24] <= 14.863146835408708) {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[35] <= 30.586306262293107) {
                                                                classes[0] = 2; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (features[8] <= 21.776322779141516) {
                                                        if (features[15] <= 1.990851309347577) {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    } else {
                                                        if (features[17] <= -4.17526447036083) {
                                                            if (features[11] <= 16.293808448182588) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                classes[0] = 8; 
                                                                classes[1] = 0; 
                                                            }
                                                        } else {
                                                            classes[0] = 8; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    }
                                }
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
                        classes[1] = 5; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
            }
        } else {
            if (features[0] <= 125.46481165730619) {
                if (features[12] <= 122.62946194532768) {
                    if (features[24] <= 39.94669337940714) {
                        if (features[34] <= 14.337602838135115) {
                            if (features[13] <= -36.51785502793169) {
                                if (features[34] <= 6.644327178784378) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[23] <= -42.84992820707352) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[23] <= -11.379090227742708) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[12] <= 44.29560997350868) {
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
                                if (features[14] <= 9.440124739248844) {
                                    if (features[25] <= -19.72416077168852) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[27] <= 3.047242484806082) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 6; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 14; 
            }
        }
    } else {
        if (features[26] <= 16.370521962747276) {
            if (features[16] <= 25.660565665765) {
                if (features[29] <= -40.856243867825825) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    if (features[23] <= 2.0718468454698673) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[2] <= 38.76731193642513) {
                    if (features[30] <= 24.805547123407017) {
                        if (features[4] <= 46.24756348982805) {
                            if (features[23] <= -27.492049400561026) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    } else {
                        if (features[31] <= 35.100774627123414) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                        } else {
                            if (features[10] <= 20.351365615678674) {
                                classes[0] = 0; 
                                classes[1] = 1; 
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
        } else {
            if (features[32] <= 43.34777784130898) {
                classes[0] = 0; 
                classes[1] = 15; 
            } else {
                if (features[23] <= 13.94724898851402) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                } else {
                    if (features[8] <= 54.521596617308255) {
                        classes[0] = 2; 
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

int predict_7(float features[]) {
    int classes[2];
    
    if (features[25] <= -56.094906687780735) {
        if (features[5] <= 18.61762457835377) {
            if (features[10] <= 23.13324600834409) {
                if (features[3] <= -0.0038689907137623436) {
                    if (features[32] <= -20.507262757284224) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[13] <= -106.50516349752674) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[34] <= 21.608294310817648) {
                                if (features[1] <= -25.601370368898557) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 25; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 18; 
            }
        } else {
            classes[0] = 1; 
            classes[1] = 0; 
        }
    } else {
        if (features[14] <= 24.54675198171458) {
            if (features[29] <= -80.99290033103568) {
                if (features[25] <= -29.990301928478434) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                if (features[29] <= -41.039644826687706) {
                    if (features[6] <= 8.329236846977222) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[0] <= 190.618619078127) {
                            if (features[2] <= 29.605402674717595) {
                                if (features[20] <= 20.35728891210504) {
                                    if (features[32] <= 9.392420510478512) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    }
                } else {
                    if (features[6] <= 25.44749245760316) {
                        if (features[17] <= -2.37569519988061) {
                            if (features[35] <= -32.37224608783948) {
                                if (features[9] <= -46.54588806375204) {
                                    if (features[3] <= -1.0993003084365132) {
                                        if (features[14] <= 10.885339005696768) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[4] <= 34.94822841833729) {
                                    if (features[6] <= 7.265095165080832) {
                                        classes[0] = 34; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[24] <= 58.50159886409603) {
                                            if (features[21] <= -41.76706093445749) {
                                                if (features[16] <= -1.5934419769763206) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[7] <= -5.730289917452229) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[24] <= 21.69032188211117) {
                                                    if (features[11] <= 48.73861412389335) {
                                                        if (features[3] <= -2.615880316031771) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 4; 
                                                        }
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[1] <= -20.08645572889897) {
                                                        classes[0] = 14; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[11] <= 10.660018608939161) {
                                                            if (features[17] <= -21.441986866966815) {
                                                                classes[0] = 3; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                if (features[21] <= -2.705343566232056) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
                                                        } else {
                                                            classes[0] = 3; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -128.62234435445737) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[26] <= 9.89251641958016) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[15] <= 5.542731351158869) {
                                                if (features[34] <= 11.606409180617527) {
                                                    classes[0] = 4; 
                                                    classes[1] = 0; 
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
                            if (features[34] <= 11.522656419221006) {
                                classes[0] = 46; 
                                classes[1] = 0; 
                            } else {
                                if (features[17] <= 13.99364450480493) {
                                    if (features[5] <= -16.05949741790979) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[0] <= 19.447521315630304) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        } else {
                            if (features[18] <= 28.186098038223772) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[12] <= 110.25529401668129) {
                if (features[4] <= 47.70599718564469) {
                    if (features[4] <= 21.97732709812807) {
                        if (features[3] <= -7.950129505749587) {
                            classes[0] = 1; 
                            classes[1] = 0; 
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
                    classes[1] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 15; 
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

int predict_8(float features[]) {
    int classes[2];
    
    if (features[5] <= -1.9839050294756362) {
        if (features[26] <= 40.404905231138926) {
            if (features[18] <= 9.905478287900465) {
                if (features[29] <= -42.616619375821486) {
                    if (features[16] <= 34.97138684567594) {
                        if (features[9] <= 4.9544504978482) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    }
                } else {
                    if (features[33] <= -4.529280895613724) {
                        if (features[0] <= 56.53231092939727) {
                            if (features[30] <= 25.206943748697366) {
                                if (features[15] <= -3.600429824518576) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[35] <= -24.388392110296998) {
                                        if (features[33] <= -76.35043897123562) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[29] <= -32.582043146985605) {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[13] <= -8.20925401347189) {
                                                    if (features[8] <= 3.476086122671184) {
                                                        if (features[22] <= 7.261690378864167) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[24] <= 16.80433592610263) {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            } else {
                                                                if (features[19] <= 1.586361878454765) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
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
                                        if (features[4] <= 23.28375748884108) {
                                            if (features[6] <= 3.7605496145080206) {
                                                classes[0] = 6; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[15] <= 1.9291444117635521) {
                                                    if (features[5] <= -22.919422912839533) {
                                                        if (features[22] <= 8.223291915029122) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 5; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[29] <= -17.617702399202486) {
                                                if (features[26] <= 25.80650639530525) {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
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
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        if (features[20] <= -4.4025121705618275) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[4] <= 33.836923033854426) {
                                if (features[3] <= -4.010773077542474) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[5] <= -15.259613370178087) {
                                        if (features[4] <= 0.7573677491198144) {
                                            if (features[7] <= -11.04831865217827) {
                                                if (features[26] <= 14.3717262270455) {
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
                                            if (features[27] <= 4.545752190242297) {
                                                if (features[31] <= -7.997492766852483) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
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
                                        classes[0] = 20; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[7] <= 6.727750030911176) {
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
            } else {
                if (features[0] <= 119.85013895847375) {
                    if (features[14] <= 35.3054420415406) {
                        if (features[17] <= -48.59042687555329) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[3] <= -4.6764313652322755) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                            } else {
                                if (features[24] <= 12.933122523563505) {
                                    if (features[5] <= -13.156172734292305) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    if (features[13] <= -28.362832598557155) {
                                        if (features[9] <= -31.991852423172375) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[33] <= 9.21511192676384) {
                                                if (features[20] <= 26.96813104998699) {
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
                                        }
                                    } else {
                                        if (features[12] <= 12.624758296005782) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[5] <= -22.95999296147376) {
                                                if (features[24] <= 45.27501414216823) {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[12] <= 40.2391876914721) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 15; 
                    }
                } else {
                    if (features[5] <= -32.262981699902085) {
                        if (features[21] <= -36.895764084949974) {
                            if (features[20] <= 24.119055468644508) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                if (features[0] <= 151.05303669863056) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
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
                        classes[0] = 0; 
                        classes[1] = 8; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 31; 
        }
    } else {
        if (features[29] <= -48.65627330199642) {
            classes[0] = 0; 
            classes[1] = 1; 
        } else {
            if (features[1] <= -130.02057006862972) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[28] <= 81.98868226911345) {
                    if (features[25] <= -97.70018331226902) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    } else {
                        if (features[14] <= 6.088221824571136) {
                            if (features[17] <= -22.188004887750374) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 13; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 35; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
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

int predict_9(float features[]) {
    int classes[2];
    
    if (features[26] <= 19.66766062331626) {
        if (features[23] <= 14.577353000415755) {
            if (features[0] <= 64.18115623303743) {
                if (features[23] <= -43.0834447939949) {
                    if (features[23] <= -45.46130314757683) {
                        classes[0] = 22; 
                        classes[1] = 0; 
                    } else {
                        if (features[3] <= -8.648568450194645) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    if (features[10] <= 21.563699138077503) {
                        if (features[2] <= 14.473016557863286) {
                            if (features[33] <= -33.23487057594343) {
                                if (features[13] <= -102.47219731215024) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[35] <= -63.465499819621066) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[27] <= -4.164424730056082) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[30] <= 16.601178382257075) {
                                                if (features[14] <= 20.259884714723952) {
                                                    if (features[22] <= 11.364573987782851) {
                                                        if (features[28] <= 31.716566873582344) {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[24] <= 16.7030215993072) {
                                                                if (features[34] <= 6.261303134482727) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 3; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    } else {
                                                        if (features[18] <= 21.442635351625835) {
                                                            classes[0] = 0; 
                                                            classes[1] = 4; 
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
                                                if (features[27] <= 0.1076522330118106) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[23] <= 0.13163310187439237) {
                                    if (features[7] <= -31.36407690982635) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[12] <= 48.19044473031091) {
                                            if (features[11] <= -1.5184806230647823) {
                                                classes[0] = 9; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[22] <= 7.467577440034209) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[30] <= 9.587638984787759) {
                                        if (features[4] <= 27.46973261212452) {
                                            classes[0] = 14; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[17] <= -4.101577365818237) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[12] <= 16.258205698923305) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[5] <= -45.34529152202666) {
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
                        } else {
                            classes[0] = 8; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[16] <= 84.87800144631322) {
                            if (features[24] <= 21.342069518446024) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        }
                    }
                }
            } else {
                if (features[11] <= -9.015575867396375) {
                    if (features[7] <= 25.26187910588822) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    } else {
                        if (features[10] <= 17.245872240017697) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 9; 
                }
            }
        } else {
            if (features[5] <= -45.24375043122272) {
                if (features[10] <= 16.456742562704534) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                if (features[21] <= 26.75378337816977) {
                    classes[0] = 38; 
                    classes[1] = 0; 
                } else {
                    if (features[7] <= 15.688592244724944) {
                        if (features[28] <= -8.63391310192361) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[5] <= -23.47186846820259) {
                                if (features[12] <= 31.891724275374656) {
                                    if (features[15] <= 3.10986895616127) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[19] <= 4.990323233238939) {
            if (features[32] <= -14.450251138978755) {
                classes[0] = 1; 
                classes[1] = 0; 
            } else {
                if (features[17] <= -22.803791378999037) {
                    classes[0] = 0; 
                    classes[1] = 30; 
                } else {
                    if (features[25] <= -190.52994845552834) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[2] <= 11.174877090832275) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[7] <= 7.0578045930366455) {
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
        } else {
            if (features[9] <= -59.4085618645924) {
                classes[0] = 0; 
                classes[1] = 13; 
            } else {
                if (features[27] <= -6.00783183964765) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                } else {
                    if (features[21] <= -16.1893844847518) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        classes[0] = 3; 
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

int predict_10(float features[]) {
    int classes[2];
    
    if (features[5] <= -80.72314776513872) {
        if (features[5] <= -141.19153898078554) {
            classes[0] = 0; 
            classes[1] = 2; 
        } else {
            if (features[22] <= 16.065644407087525) {
                if (features[29] <= -79.77916018840818) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
            }
        }
    } else {
        if (features[13] <= -140.09270023000087) {
            classes[0] = 0; 
            classes[1] = 17; 
        } else {
            if (features[9] <= -7.836005987523123) {
                if (features[8] <= -15.1407864480935) {
                    if (features[27] <= -8.820564350566485) {
                        classes[0] = 13; 
                        classes[1] = 0; 
                    } else {
                        if (features[25] <= -43.23154324071088) {
                            if (features[15] <= -2.831725883315297) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            }
                        } else {
                            if (features[16] <= 1.9678520979210046) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[34] <= 5.489583728646162) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[22] <= 11.518219809715346) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[23] <= -38.490440481292055) {
                                            classes[0] = 2; 
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
                    if (features[22] <= 24.47184205794463) {
                        if (features[30] <= 16.02537598437126) {
                            if (features[10] <= 11.279684692692413) {
                                if (features[25] <= -24.544884324327512) {
                                    if (features[24] <= 126.74201820173394) {
                                        if (features[24] <= 77.94930149146789) {
                                            if (features[24] <= 53.275548451242756) {
                                                if (features[7] <= -0.6647046036598416) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 8; 
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
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[14] <= 18.458763727440076) {
                                        if (features[13] <= -44.78852723016801) {
                                            if (features[3] <= 6.063315852360897) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[23] <= -7.509961578999587) {
                                                if (features[32] <= 25.343026461705115) {
                                                    if (features[32] <= -17.19221495519961) {
                                                        if (features[18] <= 7.847121925892459) {
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
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                }
                                            } else {
                                                classes[0] = 22; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[27] <= -5.755285446730003) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                        }
                                    }
                                }
                            } else {
                                if (features[26] <= 22.506959255950783) {
                                    if (features[22] <= 15.012328089941166) {
                                        if (features[4] <= 28.16961958826036) {
                                            if (features[10] <= 16.61879797693352) {
                                                if (features[1] <= -61.189632565337064) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                } else {
                                                    if (features[9] <= -22.191948204390684) {
                                                        if (features[28] <= 34.304110870838215) {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                        } else {
                                                            if (features[28] <= 36.755240248867885) {
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
                                                classes[0] = 0; 
                                                classes[1] = 4; 
                                            }
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[16] <= 26.919404325503578) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                }
                            }
                        } else {
                            if (features[24] <= 44.815738838545855) {
                                if (features[23] <= 7.588160077417378) {
                                    if (features[30] <= 25.328460381401122) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    } else {
                                        if (features[30] <= 26.287848124998007) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
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
                                classes[0] = 0; 
                                classes[1] = 10; 
                            }
                        }
                    } else {
                        if (features[26] <= 32.41983335352677) {
                            if (features[0] <= 6.048134367004099) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[0] <= 51.45623451818537) {
                                    if (features[11] <= -36.311939520381564) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[26] <= 8.820436153741) {
                                            if (features[3] <= -0.32115130826210825) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[17] <= -20.98096109227322) {
                                        if (features[2] <= 48.2024036375411) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        }
                    }
                }
            } else {
                if (features[19] <= 2.155038531013986) {
                    if (features[25] <= -64.26455160987776) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[5] <= -21.09789719669982) {
                            if (features[11] <= 57.18332531054794) {
                                if (features[32] <= 59.85354010008906) {
                                    if (features[23] <= 16.92528081943255) {
                                        if (features[17] <= -24.74457443353933) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[27] <= 2.7967565686297746) {
                                                if (features[1] <= -22.305361707837022) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    } else {
                                        if (features[12] <= 14.074107483995197) {
                                            if (features[26] <= 10.137213378377545) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 21; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    classes[0] = 27; 
                    classes[1] = 0; 
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

int predict_11(float features[]) {
    int classes[2];
    
    if (features[29] <= -32.59145604660337) {
        if (features[0] <= 166.80278201904278) {
            if (features[3] <= -17.432120649864494) {
                classes[0] = 0; 
                classes[1] = 1; 
            } else {
                if (features[12] <= 113.27173322125884) {
                    if (features[23] <= 32.88704715898116) {
                        if (features[26] <= 40.16946554386763) {
                            if (features[24] <= 37.30157696702591) {
                                if (features[2] <= 36.73737509501374) {
                                    if (features[7] <= -30.17204044946122) {
                                        if (features[26] <= 9.438522504236944) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        if (features[8] <= 16.469700768808693) {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[6] <= 15.473431478055245) {
                                                if (features[2] <= 10.136567106979939) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    if (features[10] <= 10.291083585746403) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                }
                                            } else {
                                                classes[0] = 3; 
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
                                classes[1] = 7; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 15; 
                        }
                    } else {
                        if (features[1] <= -15.260424470184567) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 11; 
        }
    } else {
        if (features[21] <= -13.269830888728535) {
            if (features[14] <= 51.20478990326249) {
                if (features[20] <= -22.797693108579935) {
                    if (features[6] <= 12.82511709700799) {
                        if (features[13] <= -17.144744018625815) {
                            classes[0] = 20; 
                            classes[1] = 0; 
                        } else {
                            if (features[29] <= -15.944444000695107) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                } else {
                    if (features[5] <= 1.8265155636829036) {
                        if (features[30] <= 29.256032024804963) {
                            if (features[26] <= 14.603442467116128) {
                                if (features[18] <= 8.588550590658482) {
                                    if (features[28] <= 34.8007841756571) {
                                        if (features[33] <= -36.137712378118984) {
                                            if (features[14] <= 9.778031377022046) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
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
                                    if (features[34] <= 31.089923373685803) {
                                        if (features[14] <= 22.555149612927107) {
                                            if (features[1] <= -156.58852268037782) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[0] <= 65.44772188432874) {
                                                    if (features[0] <= 19.07644210154025) {
                                                        if (features[29] <= -15.630573488599888) {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[1] <= -14.03497948592295) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 2; 
                                                            }
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
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                }
                            } else {
                                if (features[31] <= 3.5270322708817146) {
                                    if (features[28] <= 25.350383856031293) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        if (features[32] <= 4.517753219473061) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 13; 
                                }
                            }
                        } else {
                            if (features[15] <= -0.48585123452679024) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[5] <= -1.079884809013402) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
            }
        } else {
            if (features[0] <= 188.0807142872739) {
                if (features[1] <= -205.09230086630782) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[10] <= 16.700999138410587) {
                        if (features[33] <= -14.001263062470251) {
                            if (features[29] <= -2.8200265033263854) {
                                if (features[9] <= -30.941156435264812) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[33] <= -47.61770273727258) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[24] <= 49.98214130940947) {
                                if (features[9] <= 28.12679748429302) {
                                    if (features[12] <= 2.443343171124972) {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[3] <= -6.857670607543508) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[35] <= 10.552970623945983) {
                                                if (features[5] <= -21.297109308325272) {
                                                    if (features[14] <= 7.872400844601922) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 9; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                if (features[26] <= 10.479255846113633) {
                                                    classes[0] = 16; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[27] <= 0.35931503785242835) {
                                                        classes[0] = 11; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[17] <= -11.555703358517821) {
                                                            if (features[7] <= 3.9225136844232606) {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        } else {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (features[9] <= 44.086792357306365) {
                                        if (features[1] <= -18.91651113653393) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[23] <= 47.27870896088618) {
                                                classes[0] = 2; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[17] <= -20.145893452756987) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[22] <= 10.080995325701648) {
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

int predict_12(float features[]) {
    int classes[2];
    
    if (features[25] <= -93.50040560844377) {
        if (features[8] <= 9.115663277504808) {
            if (features[34] <= 11.045208427325829) {
                if (features[19] <= -45.566149172043495) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 7; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 28; 
        }
    } else {
        if (features[34] <= 28.093319769923994) {
            if (features[17] <= -13.57319281882289) {
                if (features[13] <= -159.32163191555145) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                } else {
                    if (features[24] <= 80.49181985505476) {
                        if (features[2] <= 54.384083960901705) {
                            if (features[16] <= 71.15274914687161) {
                                if (features[8] <= 15.654331233191456) {
                                    if (features[2] <= 19.684697672407864) {
                                        if (features[3] <= -3.2322686539565355) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[33] <= -41.81335552679997) {
                                                if (features[30] <= 10.5716366733296) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    if (features[20] <= -3.5852005144512287) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                }
                                            } else {
                                                if (features[6] <= 7.205777696336344) {
                                                    if (features[13] <= -74.15752105515335) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    } else {
                                                        if (features[35] <= 5.2766985540995535) {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[8] <= 7.305570795808719) {
                                                        if (features[18] <= 10.243377396187679) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    if (features[33] <= 4.140496118059616) {
                                        if (features[27] <= 1.8124085193019308) {
                                            if (features[26] <= 15.932908975131117) {
                                                if (features[14] <= 9.800421784569284) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                } else {
                                                    if (features[2] <= 32.92935100290647) {
                                                        classes[0] = 3; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
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
                                        if (features[6] <= 6.751410447795899) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[32] <= 51.993710475039535) {
                                                if (features[25] <= -14.921725520362017) {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[16] <= 22.284003305381162) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    }
                                                }
                                            } else {
                                                if (features[25] <= -22.294560267727153) {
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
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 6; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                    }
                }
            } else {
                if (features[24] <= 21.417251574535506) {
                    if (features[10] <= 29.036478571612477) {
                        if (features[11] <= -62.047659125902875) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[18] <= 10.173967188250074) {
                                if (features[7] <= 2.101138183361366) {
                                    if (features[16] <= 11.025756602653189) {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[6] <= 5.274229219420661) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[2] <= 6.635640357522176) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 3; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    classes[0] = 32; 
                                    classes[1] = 0; 
                                }
                            } else {
                                if (features[17] <= -2.4050044409954) {
                                    classes[0] = 4; 
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
                } else {
                    if (features[17] <= -1.6668303057862595) {
                        if (features[3] <= -3.960627220009645) {
                            if (features[32] <= 9.339632787434212) {
                                if (features[6] <= 7.75459858910833) {
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
                        } else {
                            if (features[13] <= -47.53928667471711) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[11] <= 13.293475328663014) {
                                    if (features[0] <= 88.40262064915272) {
                                        if (features[26] <= 10.622859980364833) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[27] <= 2.872804567445521) {
                                                if (features[26] <= 25.86224715717875) {
                                                    if (features[14] <= 8.690564317949164) {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[6] <= 5.026181404446664) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    if (features[4] <= 28.719892224632154) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[3] <= -1.3360183531542051) {
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
                    } else {
                        if (features[9] <= -21.619706923896317) {
                            if (features[2] <= 55.4326273942523) {
                                if (features[23] <= -41.33086211084871) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[22] <= 10.921427210028343) {
                                        classes[0] = 2; 
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
                            classes[0] = 16; 
                            classes[1] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[30] <= 15.264519123984051) {
                if (features[7] <= 2.1729738025380954) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 9; 
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

int predict_13(float features[]) {
    int classes[2];
    
    if (features[14] <= 37.092133845170565) {
        if (features[2] <= 49.46102621766191) {
            if (features[19] <= -62.441524349250834) {
                classes[0] = 0; 
                classes[1] = 2; 
            } else {
                if (features[24] <= 35.2264383301262) {
                    if (features[2] <= 36.088443240276405) {
                        if (features[25] <= -43.98949448205042) {
                            if (features[14] <= 4.975509702315661) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                if (features[20] <= 53.28379500344572) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[34] <= 10.235791034162373) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= -0.04524768378708899) {
                                if (features[25] <= -4.183335555802721) {
                                    if (features[3] <= -4.320883289755081) {
                                        classes[0] = 29; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[9] <= 31.160323505830164) {
                                            if (features[6] <= 15.351879524971146) {
                                                if (features[2] <= 4.848601176365856) {
                                                    classes[0] = 10; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[34] <= 21.874197045466474) {
                                                        if (features[1] <= -13.330112837874385) {
                                                            classes[0] = 17; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[30] <= 6.377103632068296) {
                                                                classes[0] = 3; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 1; 
                                                            }
                                                        }
                                                    } else {
                                                        if (features[3] <= -3.0820513273302597) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (features[31] <= 18.340176023905194) {
                                                    classes[0] = 2; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[19] <= -1.0305882543230442) {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                }
                                            }
                                        } else {
                                            if (features[4] <= 13.884093415869444) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[15] <= 0.3776014720282737) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[35] <= -3.6811881794350043) {
                                    if (features[10] <= 14.544730792031139) {
                                        if (features[25] <= -20.624674702354092) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[9] <= -49.30984059595961) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                if (features[5] <= -22.881569561959044) {
                                                    if (features[7] <= -4.6778795220931455) {
                                                        if (features[0] <= 22.040916300397793) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    if (features[3] <= 0.36222228797256123) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (features[0] <= 22.06256728715383) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 13.246219915207424) {
                                        if (features[29] <= -22.2412319063401) {
                                            if (features[15] <= 0.6417146125085567) {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[9] <= 45.75034889287797) {
                                                    if (features[22] <= 11.383641442670923) {
                                                        if (features[22] <= 6.082185944950678) {
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
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[27] <= -0.8768376857426512) {
                                                if (features[32] <= 31.524019185232007) {
                                                    if (features[35] <= 7.142472131734545) {
                                                        classes[0] = 0; 
                                                        classes[1] = 1; 
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                    }
                                                } else {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                }
                                            } else {
                                                classes[0] = 15; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[12] <= 19.194543223453007) {
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
                    } else {
                        if (features[28] <= 79.73159530187566) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[24] <= 66.80382567402154) {
                        if (features[16] <= -11.242247113605146) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            if (features[23] <= -6.7438303556773604) {
                                if (features[21] <= -71.75539637345607) {
                                    if (features[20] <= 25.132613272002246) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    if (features[0] <= 50.14210511471243) {
                                        if (features[18] <= 14.98184445127701) {
                                            if (features[17] <= -31.379951217854373) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                if (features[2] <= 17.53086133070882) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
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
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                }
                            } else {
                                if (features[29] <= -38.51594649558698) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[1] <= -123.60092156175567) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        if (features[0] <= 27.894636904771737) {
                                            if (features[6] <= 8.263119496566205) {
                                                classes[0] = 7; 
                                                classes[1] = 0; 
                                            } else {
                                                if (features[2] <= 10.516203536484252) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                } else {
                                                    classes[0] = 3; 
                                                    classes[1] = 0; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[32] <= -17.565126207454654) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        } else {
                            if (features[4] <= 38.25746077776768) {
                                classes[0] = 0; 
                                classes[1] = 18; 
                            } else {
                                if (features[35] <= 2.071142047281967) {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                } else {
                                    if (features[22] <= 7.933483140989339) {
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
        } else {
            classes[0] = 0; 
            classes[1] = 24; 
        }
    } else {
        classes[0] = 0; 
        classes[1] = 23; 
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

int predict_14(float features[]) {
    int classes[2];
    
    if (features[6] <= 6.856799819268295) {
        if (features[16] <= -5.732319510417209) {
            classes[0] = 0; 
            classes[1] = 1; 
        } else {
            if (features[24] <= 210.82680405807997) {
                if (features[13] <= -78.97916191768793) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                } else {
                    if (features[8] <= -10.270660645454498) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                    } else {
                        if (features[9] <= -7.769438074794337) {
                            if (features[23] <= -5.359975749398365) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                if (features[12] <= 13.012874393264239) {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        } else {
                            if (features[21] <= 20.514092527569318) {
                                classes[0] = 15; 
                                classes[1] = 0; 
                            } else {
                                if (features[7] <= -8.61736884827462) {
                                    if (features[33] <= 24.990823455616283) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
            }
        }
    } else {
        if (features[24] <= 94.52419732442321) {
            if (features[22] <= 27.865729152261544) {
                if (features[5] <= -20.81302895248544) {
                    if (features[23] <= -70.33027281533631) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        if (features[0] <= 134.52864561533957) {
                            if (features[12] <= 98.85419422520985) {
                                if (features[2] <= 47.37126160036442) {
                                    if (features[15] <= -6.4655982715320945) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[26] <= 31.56419370144444) {
                                            if (features[34] <= 22.56598551568324) {
                                                if (features[3] <= -3.1524965513464043) {
                                                    classes[0] = 5; 
                                                    classes[1] = 0; 
                                                } else {
                                                    if (features[2] <= 25.01237217654445) {
                                                        if (features[33] <= -43.31910024365368) {
                                                            if (features[31] <= -3.531293436644484) {
                                                                if (features[28] <= 31.573022059897436) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 1; 
                                                                    classes[1] = 0; 
                                                                }
                                                            } else {
                                                                classes[0] = 0; 
                                                                classes[1] = 4; 
                                                            }
                                                        } else {
                                                            if (features[11] <= 75.04974841808065) {
                                                                if (features[24] <= 32.00252751447378) {
                                                                    if (features[34] <= 3.2703875434477476) {
                                                                        classes[0] = 0; 
                                                                        classes[1] = 1; 
                                                                    } else {
                                                                        if (features[26] <= 7.35779547044503) {
                                                                            if (features[21] <= 76.98940394492327) {
                                                                                if (features[17] <= -0.6591446123361351) {
                                                                                    classes[0] = 0; 
                                                                                    classes[1] = 2; 
                                                                                } else {
                                                                                    if (features[21] <= -14.397916128112895) {
                                                                                        classes[0] = 0; 
                                                                                        classes[1] = 1; 
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
                                                                            classes[0] = 11; 
                                                                            classes[1] = 0; 
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (features[11] <= 20.12107116566048) {
                                                                        classes[0] = 0; 
                                                                        classes[1] = 3; 
                                                                    } else {
                                                                        classes[0] = 2; 
                                                                        classes[1] = 0; 
                                                                    }
                                                                }
                                                            } else {
                                                                classes[0] = 1; 
                                                                classes[1] = 0; 
                                                            }
                                                        }
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 3; 
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
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 13; 
                        }
                    }
                } else {
                    if (features[2] <= 18.34195850056746) {
                        if (features[9] <= -5.333754610891333) {
                            if (features[15] <= -1.7372727287527603) {
                                if (features[14] <= 29.10803381582927) {
                                    classes[0] = 20; 
                                    classes[1] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            } else {
                                if (features[2] <= 9.35529029122647) {
                                    if (features[29] <= -19.10009000967261) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                    }
                                } else {
                                    if (features[5] <= -6.78957256059608) {
                                        if (features[8] <= -22.158751978612855) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        } else {
                                            if (features[13] <= -37.61814378091048) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            } else {
                                                classes[0] = 4; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 18; 
                            classes[1] = 0; 
                        }
                    } else {
                        if (features[23] <= 17.10176559940895) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[7] <= 8.16787428696188) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                } else {
                    if (features[18] <= 20.138906934413605) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        if (features[31] <= 14.149827131226196) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        } else {
                            if (features[0] <= 34.013310239656505) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                            } else {
                                if (features[28] <= 77.48911366681061) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
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
            classes[0] = 0; 
            classes[1] = 35; 
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
    classes[predict_5(features)]++;
    classes[predict_6(features)]++;
    classes[predict_7(features)]++;
    classes[predict_8(features)]++;
    classes[predict_9(features)]++;
    classes[predict_10(features)]++;
    classes[predict_11(features)]++;
    classes[predict_12(features)]++;
    classes[predict_13(features)]++;
    classes[predict_14(features)]++;

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