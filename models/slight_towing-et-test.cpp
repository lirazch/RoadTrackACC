#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[2];
    
    if (features[33] <= -27.639800337906834) {
        classes[0] = 0; 
        classes[1] = 8; 
    } else {
        if (features[34] <= 8.808586707679304) {
            if (features[42] <= 6.407746497211371) {
                if (features[25] <= -22.493489121316692) {
                    if (features[19] <= -7.220415279482543) {
                        if (features[35] <= -8.274838746963242) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                        } else {
                            if (features[9] <= -36.706225857467494) {
                                classes[0] = 0; 
                                classes[1] = 20; 
                            } else {
                                if (features[27] <= -22.795449712083187) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[5] <= -8.213398657838534) {
                            classes[0] = 0; 
                            classes[1] = 14; 
                        } else {
                            if (features[24] <= -5.373063197998825) {
                                if (features[35] <= -2.573148611373859) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    if (features[42] <= 5.8010065998383835) {
                                        if (features[41] <= -18.24264732666437) {
                                            if (features[7] <= 21.33895964011858) {
                                                classes[0] = 2; 
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
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    }
                                }
                            } else {
                                if (features[16] <= 31.64884293435553) {
                                    if (features[7] <= 25.761460270311122) {
                                        classes[0] = 64; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[18] <= 6.719437926734127) {
                        if (features[26] <= 10.392081505850864) {
                            if (features[11] <= 29.005737345158693) {
                                if (features[13] <= -22.512166009523042) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[9] <= -6.2674335475393725) {
                                        classes[0] = 42; 
                                        classes[1] = 0; 
                                    } else {
                                        if (features[42] <= 2.071417430270251) {
                                            if (features[11] <= 8.840410567802513) {
                                                classes[0] = 45; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        } else {
                                            if (features[34] <= 1.9509474829437412) {
                                                if (features[40] <= 14.742528866390945) {
                                                    classes[0] = 5; 
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
                                }
                            } else {
                                if (features[36] <= 9.53795219656916) {
                                    if (features[9] <= 33.78033275426381) {
                                        if (features[11] <= 33.35400051814495) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                        } else {
                                            if (features[20] <= 5.79978483626609) {
                                                classes[0] = 5; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 25; 
                                        classes[1] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 18; 
            }
        } else {
            if (features[9] <= 6.646008898804894) {
                if (features[35] <= 1.1361494025575123) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                } else {
                    if (features[25] <= -21.21861307007196) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
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
    
    if (features[34] <= 7.472229811293996) {
        if (features[39] <= -2.0805611053520714) {
            if (features[11] <= 8.37082687297368) {
                if (features[21] <= -11.225660668325453) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                } else {
                    if (features[2] <= 3.76627625816862) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            } else {
                if (features[37] <= -10.237502991332441) {
                    if (features[9] <= 12.584270105037966) {
                        classes[0] = 0; 
                        classes[1] = 16; 
                    } else {
                        if (features[36] <= -3.824913822032937) {
                            if (features[27] <= 30.892474282743144) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                            } else {
                                if (features[11] <= 34.586317885964355) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        } else {
                            if (features[8] <= 39.47996447583659) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[30] <= 0.23189873634691863) {
                        if (features[41] <= 13.277026072739169) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                        } else {
                            classes[0] = 24; 
                            classes[1] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                    }
                }
            }
        } else {
            if (features[10] <= 6.801983138674675) {
                if (features[18] <= 20.308870109242317) {
                    if (features[33] <= -12.022284273068554) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    } else {
                        if (features[17] <= -26.432796635866538) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                        } else {
                            if (features[43] <= -34.00959928217617) {
                                classes[0] = 0; 
                                classes[1] = 12; 
                            } else {
                                if (features[9] <= 14.242488893793194) {
                                    if (features[14] <= 2.098154328881669) {
                                        if (features[7] <= 25.39094880617312) {
                                            if (features[24] <= 11.106595022187847) {
                                                if (features[16] <= 16.42831812446393) {
                                                    if (features[33] <= -9.826449527324387) {
                                                        classes[0] = 90; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[10] <= 2.4911195279335896) {
                                                            classes[0] = 5; 
                                                            classes[1] = 0; 
                                                        } else {
                                                            if (features[17] <= -9.971714933389665) {
                                                                classes[0] = 20; 
                                                                classes[1] = 0; 
                                                            } else {
                                                                if (features[37] <= -2.79215602147959) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 1; 
                                                                } else {
                                                                    classes[0] = 11; 
                                                                    classes[1] = 0; 
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (features[6] <= 5.924936450559121) {
                                                        classes[0] = 2; 
                                                        classes[1] = 0; 
                                                    } else {
                                                        if (features[37] <= 8.489937832807161) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                        } else {
                                                            classes[0] = 2; 
                                                            classes[1] = 0; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (features[38] <= 3.0272608672581387) {
                                                    classes[0] = 40; 
                                                    classes[1] = 0; 
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
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
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
        }
    } else {
        if (features[22] <= 4.546756331212157) {
            classes[0] = 0; 
            classes[1] = 15; 
        } else {
            if (features[24] <= 35.177633469541384) {
                if (features[24] <= -0.4764621837420684) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 5; 
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
    
    if (features[37] <= 13.022571841731) {
        if (features[18] <= 2.032127352507228) {
            if (features[0] <= 8.003817636521447) {
                if (features[10] <= 5.804763856727007) {
                    if (features[37] <= -11.524858546222028) {
                        if (features[9] <= 18.85638248122129) {
                            classes[0] = 0; 
                            classes[1] = 9; 
                        } else {
                            if (features[21] <= -9.864916811634282) {
                                if (features[9] <= 35.48396557172945) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
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
                        if (features[41] <= -32.50024806172598) {
                            classes[0] = 0; 
                            classes[1] = 18; 
                        } else {
                            if (features[38] <= 2.6198452927102425) {
                                if (features[9] <= 10.295907697778155) {
                                    classes[0] = 81; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[25] <= 14.066795826920679) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                    } else {
                                        classes[0] = 20; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[22] <= 1.7801140666048851) {
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
                    classes[1] = 3; 
                }
            } else {
                if (features[1] <= -17.17994114997794) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                } else {
                    classes[0] = 1; 
                    classes[1] = 0; 
                }
            }
        } else {
            if (features[16] <= -3.121030781008783) {
                if (features[39] <= 5.022620090325672) {
                    if (features[3] <= -6.72365166310871) {
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
                if (features[5] <= 8.368746414952327) {
                    if (features[25] <= 23.70528810923234) {
                        if (features[32] <= 2.9786931169120106) {
                            if (features[5] <= -4.9127918988991475) {
                                classes[0] = 0; 
                                classes[1] = 22; 
                            } else {
                                if (features[25] <= 5.6227823298530595) {
                                    if (features[39] <= 2.0362089228472966) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                }
                            }
                        } else {
                            if (features[19] <= -1.0877218045949775) {
                                classes[0] = 0; 
                                classes[1] = 9; 
                            } else {
                                if (features[27] <= -11.977990262240198) {
                                    if (features[32] <= 18.94762108984758) {
                                        if (features[27] <= -13.030473961426253) {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[10] <= 4.043677421692112) {
                            if (features[8] <= 43.51913083322306) {
                                if (features[8] <= 37.17725636119827) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 14; 
                        }
                    }
                } else {
                    if (features[42] <= 4.352431386724518) {
                        classes[0] = 62; 
                        classes[1] = 0; 
                    } else {
                        if (features[40] <= -1.7070213806382473) {
                            if (features[26] <= 4.505919732529411) {
                                if (features[18] <= 5.550578528759793) {
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
                            if (features[19] <= 3.7714317947220373) {
                                if (features[23] <= 16.1543565867502) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                } else {
                                    if (features[23] <= 20.4240985459057) {
                                        if (features[25] <= -21.757287158517766) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                        }
                                    } else {
                                        classes[0] = 19; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[38] <= 16.189797127757373) {
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
            }
        }
    } else {
        classes[0] = 0; 
        classes[1] = 4; 
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
        if (features[6] <= 2.277976337649539) {
            if (features[5] <= -4.121910283398773) {
                if (features[25] <= -29.131517082979677) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                } else {
                    if (features[9] <= 35.50712067983445) {
                        if (features[27] <= 27.79643228422661) {
                            if (features[36] <= 5.338161713135504) {
                                classes[0] = 0; 
                                classes[1] = 13; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[7] <= -6.924254555378167) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 20; 
                        classes[1] = 0; 
                    }
                }
            } else {
                if (features[37] <= 5.478780089634835) {
                    if (features[24] <= -21.546124797103055) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[34] <= 6.937808127199308) {
                            classes[0] = 70; 
                            classes[1] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 10; 
                }
            }
        } else {
            if (features[21] <= -8.248833146062136) {
                if (features[19] <= -3.432674801140463) {
                    if (features[42] <= 1.543370282656101) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    } else {
                        if (features[1] <= -14.176858234301609) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                        } else {
                            if (features[25] <= 28.21023194129124) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[32] <= 10.115779223905774) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                    } else {
                        if (features[41] <= -17.42314843527188) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                if (features[16] <= -0.7499538272386204) {
                    if (features[4] <= 10.922769702469356) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 15; 
                    }
                } else {
                    if (features[19] <= -1.093165969931114) {
                        if (features[18] <= 1.7323932297267495) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                        } else {
                            if (features[2] <= 11.101926336772912) {
                                if (features[11] <= -9.646912791065148) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[9] <= 35.180022719865676) {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
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
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                    }
                }
            }
        }
    } else {
        if (features[34] <= 8.187179940646281) {
            if (features[2] <= 10.713317779895169) {
                if (features[17] <= -19.67015349290807) {
                    if (features[35] <= 1.7070236779262267) {
                        classes[0] = 0; 
                        classes[1] = 8; 
                    } else {
                        if (features[36] <= 28.713649779890503) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                        }
                    }
                } else {
                    if (features[8] <= -7.009711881638371) {
                        if (features[23] <= 13.794821761179684) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                        } else {
                            if (features[11] <= -13.731320464014177) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        if (features[21] <= 5.315309344472041) {
                            if (features[7] <= 16.145932273907835) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                            }
                        } else {
                            if (features[18] <= 6.1235168267026525) {
                                if (features[17] <= -9.58369064032272) {
                                    classes[0] = 50; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[43] <= -11.418777403582821) {
                                        if (features[39] <= 20.317999506007812) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                        } else {
                                            if (features[21] <= 12.498491239034799) {
                                                classes[0] = 11; 
                                                classes[1] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 13; 
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
                classes[1] = 4; 
            }
        } else {
            if (features[26] <= 4.541356166793283) {
                classes[0] = 2; 
                classes[1] = 0; 
            } else {
                if (features[22] <= 6.531967477548234) {
                    if (features[5] <= -18.36475303134171) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                    } else {
                        if (features[10] <= 5.634789851877857) {
                            if (features[35] <= 0.8507258816157467) {
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

int predict_4(float features[]) {
    int classes[2];
    
    if (features[34] <= 6.088686148842961) {
        if (features[9] <= 33.073160762467026) {
            if (features[32] <= 8.429740207469901) {
                if (features[19] <= -6.34561789399142) {
                    if (features[39] <= 9.511142099490531) {
                        if (features[11] <= -25.4131737089064) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                        } else {
                            if (features[1] <= -8.402285192349128) {
                                if (features[17] <= -9.00171703333115) {
                                    classes[0] = 53; 
                                    classes[1] = 0; 
                                } else {
                                    if (features[20] <= -1.2606070177911812) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                    }
                                }
                            } else {
                                if (features[39] <= -5.216906229783493) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                } else {
                                    classes[0] = 15; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 19; 
                    }
                } else {
                    if (features[38] <= 2.991135695275432) {
                        if (features[39] <= -1.46835365812702) {
                            if (features[3] <= -4.478394488862762) {
                                if (features[37] <= -11.413710793207265) {
                                    if (features[42] <= 2.1683442692361825) {
                                        if (features[1] <= -8.578993002222383) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                        } else {
                                            if (features[41] <= 17.56434866300055) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                }
                            } else {
                                if (features[5] <= -10.182202919471171) {
                                    if (features[37] <= -9.943792768727892) {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
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
                            if (features[4] <= 5.699100420670165) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                if (features[6] <= 3.3731112720721415) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 14; 
                    }
                }
            } else {
                if (features[7] <= 2.873283601677329) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[21] <= 20.985371381503235) {
                        if (features[19] <= -1.2079757973764367) {
                            if (features[43] <= 20.2148341581656) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            }
                        } else {
                            if (features[43] <= -16.074791808390835) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                            } else {
                                classes[0] = 82; 
                                classes[1] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                    }
                }
            }
        } else {
            classes[0] = 25; 
            classes[1] = 0; 
        }
    } else {
        if (features[42] <= 9.110955434103836) {
            if (features[27] <= 3.3664967345771117) {
                if (features[16] <= 1.1753489827622419) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                } else {
                    if (features[24] <= -7.152411100991261) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                    } else {
                        if (features[27] <= -13.114155985214225) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 10; 
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