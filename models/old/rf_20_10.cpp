#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[3];
    
    if (features[5] <= 13.949028015136719) {
        if (features[11] <= 41.5) {
            if (features[2] <= -0.35999998450279236) {
                if (features[14] <= -18.0) {
                    if (features[7] <= 8.83594799041748) {
                        if (features[5] <= 5.583867073059082) {
                            if (features[10] <= 6.0) {
                                classes[0] = 130; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[2] <= -7.440000057220459) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 0.11999999731779099) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[11] <= 9.5) {
                                if (features[3] <= 5.739999771118164) {
                                    if (features[9] <= 30.0) {
                                        if (features[8] <= 6.0) {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 34; 
                                            classes[1] = 0; 
                                            classes[2] = 7; 
                                        }
                                    } else {
                                        if (features[0] <= -2.4000000953674316) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 5; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= -48.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[13] <= -30.0) {
                                    if (features[3] <= 32.959999084472656) {
                                        if (features[4] <= 16.21160888671875) {
                                            classes[0] = 17; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[14] <= -42.0) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[5] <= 8.004050254821777) {
                                        if (features[13] <= -6.0) {
                                            classes[0] = 37; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 97; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[5] <= 4.752893447875977) {
                        if (features[7] <= 0.5494611263275146) {
                            if (features[2] <= -0.9600000381469727) {
                                classes[0] = 29; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[13] <= -6.0) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.25253814458847046) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[1] <= -0.12000001966953278) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[6] <= 6.8794941902160645) {
                            if (features[0] <= -3.8399999141693115) {
                                if (features[5] <= 8.23377799987793) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 21.310001373291016) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[3] <= 10.25) {
                                    if (features[5] <= 5.2320556640625) {
                                        if (features[2] <= -6.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[13] <= -6.0) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 16; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 16; 
                                        }
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[12] <= -30.0) {
                                if (features[5] <= 9.026676177978516) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 13; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[14] <= 30.0) {
                    if (features[1] <= 68.5199966430664) {
                        if (features[4] <= 18.240861892700195) {
                            if (features[14] <= -18.0) {
                                if (features[9] <= 18.0) {
                                    if (features[13] <= -6.0) {
                                        if (features[7] <= 0.9059975147247314) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[6] <= 14.251251220703125) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        }
                                    }
                                } else {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[1] <= -44.15999984741211) {
                                    if (features[1] <= -45.720001220703125) {
                                        if (features[3] <= 39.119998931884766) {
                                            classes[0] = 23; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[11] <= 0.5) {
                                        if (features[6] <= 8.923235893249512) {
                                            classes[0] = 240; 
                                            classes[1] = 0; 
                                            classes[2] = 10; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[3] <= 0.3938775658607483) {
                                            classes[0] = 14; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 696; 
                                            classes[1] = 5; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[7] <= 0.3732035756111145) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                if (features[9] <= -30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    if (features[2] <= 38.040000915527344) {
                                        classes[0] = 15; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 19.636280059814453) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    if (features[15] <= 3.0) {
                        if (features[15] <= 1.5) {
                            if (features[6] <= 6.012160778045654) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[1] <= 57.36000061035156) {
                            if (features[4] <= 13.987096786499023) {
                                if (features[10] <= 54.0) {
                                    classes[0] = 35; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[15] <= 12.0) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[0] <= 7.319999694824219) {
                                            classes[0] = 24; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[2] <= 51.959999084472656) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[15] <= 88.5) {
                if (features[7] <= 1.8994603157043457) {
                    if (features[6] <= 5.056296348571777) {
                        if (features[3] <= 68.68000030517578) {
                            if (features[0] <= 2.5199999809265137) {
                                if (features[6] <= 1.4796580076217651) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[5] <= 6.222691535949707) {
                                        if (features[10] <= 54.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[5] <= 5.741304874420166) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[15] <= 38.5) {
                            if (features[5] <= 6.543370246887207) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[5] <= 9.560103416442871) {
                                if (features[14] <= 6.0) {
                                    if (features[12] <= -54.0) {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[13] <= 18.0) {
                                            classes[0] = 210; 
                                            classes[1] = 34; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -1.2000000476837158) {
                                        if (features[5] <= 8.058953285217285) {
                                            classes[0] = 24; 
                                            classes[1] = 27; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 21; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 6.840000152587891) {
                                            classes[0] = 64; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= 14.520000457763672) {
                                    if (features[9] <= 18.0) {
                                        if (features[5] <= 12.326120376586914) {
                                            classes[0] = 34; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= -0.11999999731779099) {
                                            classes[0] = 29; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 92; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= -30.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[3] <= 47.900001525878906) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 35; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[3] <= 40.81999969482422) {
                        if (features[7] <= 3.3941125869750977) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[10] <= 66.0) {
                            classes[0] = 54; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[7] <= 2.1386559009552) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 9; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 34; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[4] <= 17.510900497436523) {
            if (features[3] <= 41.68000030517578) {
                if (features[2] <= 40.31999969482422) {
                    if (features[15] <= 17.5) {
                        if (features[0] <= 5.880000114440918) {
                            if (features[3] <= 13.479999542236328) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 6; 
                            } else {
                                if (features[14] <= -30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[6] <= 5.969918251037598) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[0] <= 5.400000095367432) {
                                if (features[11] <= 37.5) {
                                    if (features[9] <= 78.0) {
                                        classes[0] = 36; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= -12.84000015258789) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                if (features[0] <= 8.640000343322754) {
                    if (features[6] <= 7.944342613220215) {
                        if (features[7] <= 0.4008735716342926) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                            classes[2] = 0; 
                        } else {
                            if (features[7] <= 0.6196126937866211) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[9] <= 30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[9] <= -6.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[15] <= 63.5) {
                                if (features[5] <= 14.285688400268555) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 29; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 54; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            if (features[5] <= 17.577011108398438) {
                if (features[12] <= -54.0) {
                    if (features[14] <= 6.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 8; 
                    } else {
                        if (features[9] <= 78.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    if (features[10] <= -6.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    } else {
                        if (features[15] <= 44.5) {
                            if (features[4] <= 20.02646255493164) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                if (features[4] <= 23.74402618408203) {
                                    classes[0] = 14; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            if (features[13] <= -18.0) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            } else {
                                if (features[14] <= -12.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[1] <= 8.880000114440918) {
                    if (features[11] <= 17.5) {
                        if (features[14] <= -42.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        } else {
                            if (features[1] <= -25.920000076293945) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[1] <= 4.440000057220459) {
                            if (features[4] <= 22.3316650390625) {
                                if (features[14] <= -18.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 88; 
                            }
                        } else {
                            if (features[6] <= 15.041730880737305) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 97; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_1(float features[]) {
    int classes[3];
    
    if (features[6] <= 15.073856353759766) {
        if (features[15] <= 44.5) {
            if (features[4] <= 18.640827178955078) {
                if (features[10] <= 54.0) {
                    if (features[7] <= 7.605319976806641) {
                        if (features[11] <= 45.5) {
                            if (features[6] <= 0.8485281467437744) {
                                if (features[5] <= 2.7774603366851807) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[2] <= 40.68000030517578) {
                                    if (features[15] <= 0.5) {
                                        if (features[6] <= 9.759382247924805) {
                                            classes[0] = 457; 
                                            classes[1] = 3; 
                                            classes[2] = 35; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        }
                                    } else {
                                        if (features[5] <= 14.381258010864258) {
                                            classes[0] = 1006; 
                                            classes[1] = 33; 
                                            classes[2] = 8; 
                                        } else {
                                            classes[0] = 24; 
                                            classes[1] = 3; 
                                            classes[2] = 4; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= -6.0) {
                                        if (features[15] <= 4.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 31; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[12] <= -6.0) {
                                            classes[0] = 9; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[0] <= 1.3200000524520874) {
                                if (features[9] <= 30.0) {
                                    if (features[1] <= -15.84000015258789) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 21; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[9] <= 42.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[13] <= -18.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 44.970001220703125) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[5] <= 7.216487884521484) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[15] <= 8.5) {
                        if (features[0] <= 1.2000000476837158) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[13] <= -30.0) {
                            if (features[8] <= 30.0) {
                                if (features[6] <= 6.032346725463867) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        } else {
                            if (features[5] <= 3.542807102203369) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                if (features[15] <= 11.5) {
                                    if (features[13] <= -18.0) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 47; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[0] <= -1.9200000762939453) {
                    if (features[13] <= -60.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[7] <= 0.2314550280570984) {
                            if (features[6] <= 9.425912857055664) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            classes[0] = 14; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[15] <= 20.5) {
                        if (features[1] <= -17.520000457763672) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 14; 
                        }
                    } else {
                        if (features[5] <= 16.818729400634766) {
                            if (features[7] <= 1.323868751525879) {
                                classes[0] = 14; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    }
                }
            }
        } else {
            if (features[9] <= 30.0) {
                if (features[3] <= 88.3800048828125) {
                    if (features[5] <= 13.578590393066406) {
                        if (features[1] <= -27.720001220703125) {
                            if (features[2] <= 36.47999954223633) {
                                if (features[11] <= 80.0) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[11] <= 45.5) {
                                if (features[2] <= 0.9600005149841309) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[6] <= 9.702030181884766) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[6] <= 1.1876919269561768) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 0.35999998450279236) {
                                        if (features[13] <= -30.0) {
                                            classes[0] = 10; 
                                            classes[1] = 15; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 140; 
                                            classes[1] = 32; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 6.0) {
                                            classes[0] = 172; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 110; 
                                            classes[1] = 22; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[8] <= 66.0) {
                            if (features[13] <= -66.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[5] <= 14.421483993530273) {
                                    if (features[7] <= 0.9762883186340332) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 21; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
                    classes[2] = 0; 
                }
            } else {
                if (features[2] <= -14.760000228881836) {
                    if (features[6] <= 9.600639343261719) {
                        if (features[2] <= -22.31999969482422) {
                            classes[0] = 17; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= 4.800000190734863) {
                                if (features[4] <= 12.789173126220703) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 7; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[3] <= 51.290000915527344) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[3] <= 47.630001068115234) {
                        if (features[3] <= 46.900001525878906) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[9] <= 42.0) {
                            if (features[4] <= 16.023204803466797) {
                                if (features[5] <= 9.231691360473633) {
                                    if (features[1] <= 17.639999389648438) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 10.166391372680664) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 15.720000267028809) {
                                        if (features[3] <= 64.1199951171875) {
                                            classes[0] = 0; 
                                            classes[1] = 17; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 26; 
                                            classes[1] = 17; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 22; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 20; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[8] <= 54.0) {
                                if (features[15] <= 64.5) {
                                    if (features[0] <= -3.7199997901916504) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[10] <= 30.0) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 23; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 68; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[8] <= 30.0) {
            if (features[13] <= -42.0) {
                if (features[9] <= 6.0) {
                    if (features[9] <= -6.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                }
            } else {
                if (features[13] <= -6.0) {
                    if (features[4] <= 8.540857315063477) {
                        classes[0] = 11; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[5] <= 6.895793914794922) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[8] <= 18.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[14] <= -6.0) {
                if (features[15] <= 11.5) {
                    if (features[14] <= -42.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[0] <= -9.600000381469727) {
                        if (features[4] <= 44.197410583496094) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[7] <= 0.0989743322134018) {
                            if (features[13] <= 12.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 21; 
                            } else {
                                if (features[11] <= 28.5) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 110; 
                        }
                    }
                }
            } else {
                if (features[9] <= 54.0) {
                    if (features[11] <= 46.0) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    if (features[11] <= 18.5) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 31; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_2(float features[]) {
    int classes[3];
    
    if (features[3] <= 44.959999084472656) {
        if (features[1] <= 68.75999450683594) {
            if (features[4] <= 17.07830047607422) {
                if (features[11] <= 13.5) {
                    if (features[5] <= 5.594428062438965) {
                        if (features[14] <= 30.0) {
                            if (features[3] <= 4.840000152587891) {
                                if (features[6] <= 9.415555953979492) {
                                    if (features[5] <= 3.1239430904388428) {
                                        if (features[6] <= 6.240090370178223) {
                                            classes[0] = 135; 
                                            classes[1] = 1; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 2; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[3] <= 2.9600000381469727) {
                                            classes[0] = 348; 
                                            classes[1] = 1; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= -6.0) {
                                        if (features[6] <= 10.376300811767578) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                }
                            } else {
                                if (features[15] <= 3.5) {
                                    if (features[1] <= -0.11999999731779099) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= -3.119999885559082) {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[12] <= 12.0) {
                                            classes[0] = 31; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 4.420000076293945) {
                                if (features[2] <= 42.720001220703125) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[10] <= 18.0) {
                            if (features[2] <= -12.600000381469727) {
                                if (features[14] <= -66.0) {
                                    if (features[8] <= 18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 6; 
                                    }
                                } else {
                                    if (features[0] <= -1.9147826433181763) {
                                        if (features[11] <= 8.0) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 5.739999771118164) {
                                            classes[0] = 44; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[10] <= 6.0) {
                                    if (features[0] <= -2.880000114440918) {
                                        if (features[5] <= 7.353956699371338) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= 1.9200000762939453) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 23; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 5.820661544799805) {
                                        if (features[13] <= -6.0) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 11; 
                                        }
                                    } else {
                                        if (features[15] <= 0.5) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 31; 
                                            classes[1] = 1; 
                                            classes[2] = 3; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[2] <= 2.759999990463257) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[9] <= 6.0) {
                                    if (features[6] <= 10.755119323730469) {
                                        classes[0] = 23; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    }
                                } else {
                                    classes[0] = 152; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[7] <= 9.810312271118164) {
                        if (features[13] <= -30.0) {
                            if (features[15] <= 31.5) {
                                if (features[1] <= -3.7199997901916504) {
                                    if (features[11] <= 33.5) {
                                        if (features[2] <= 72.72000122070312) {
                                            classes[0] = 91; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[14] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[11] <= 21.5) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[10] <= 18.0) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[4] <= 12.550387382507324) {
                                        if (features[6] <= 6.1269941329956055) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 38.30000305175781) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[6] <= 17.159244537353516) {
                                if (features[2] <= 64.08000183105469) {
                                    if (features[2] <= 6.479999542236328) {
                                        if (features[1] <= 10.920000076293945) {
                                            classes[0] = 230; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 47; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 17.380786895751953) {
                                            classes[0] = 342; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 6.803833961486816) {
                                        if (features[10] <= 96.0) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= -4.320000171661377) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 2.0197277069091797) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[6] <= 12.98786735534668) {
                    if (features[15] <= 16.5) {
                        if (features[15] <= 10.5) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[5] <= 10.171590805053711) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 10; 
                            }
                        }
                    } else {
                        if (features[6] <= 4.859376907348633) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[13] <= -84.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[15] <= 38.5) {
                                    if (features[14] <= 42.0) {
                                        classes[0] = 39; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[13] <= -30.0) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[7] <= 0.5265856981277466) {
                        if (features[2] <= 11.15999984741211) {
                            if (features[5] <= 17.610301971435547) {
                                if (features[1] <= 36.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 20; 
                            }
                        } else {
                            if (features[3] <= 38.290000915527344) {
                                classes[0] = 11; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[2] <= 20.880001068115234) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[14] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 58; 
                        } else {
                            if (features[9] <= 66.0) {
                                if (features[8] <= 48.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 17; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[8] <= 30.0) {
                if (features[15] <= 24.5) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 28; 
            }
        }
    } else {
        if (features[4] <= 23.64527702331543) {
            if (features[15] <= 85.5) {
                if (features[9] <= 42.0) {
                    if (features[1] <= 14.399999618530273) {
                        if (features[15] <= 56.5) {
                            if (features[3] <= 50.90999984741211) {
                                if (features[2] <= -13.799999237060547) {
                                    if (features[2] <= -24.360000610351562) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[3] <= 48.08000183105469) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= -6.0) {
                                        if (features[3] <= 50.62999725341797) {
                                            classes[0] = 44; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 5.321645736694336) {
                                            classes[0] = 3; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 68; 
                                            classes[1] = 20; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 14.622936248779297) {
                                    if (features[1] <= 5.880000114440918) {
                                        if (features[4] <= 7.047341823577881) {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 36; 
                                            classes[1] = 55; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.1979486644268036) {
                                            classes[0] = 2; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= -66.0) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[11] <= 81.5) {
                                if (features[5] <= 12.852548599243164) {
                                    if (features[13] <= -30.0) {
                                        if (features[3] <= 74.3699951171875) {
                                            classes[0] = 23; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 21.911357879638672) {
                                            classes[0] = 230; 
                                            classes[1] = 29; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 4.199999809265137) {
                                        if (features[5] <= 18.713462829589844) {
                                            classes[0] = 10; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 65.58000183105469) {
                                            classes[0] = 1; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 22; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 20; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[10] <= 42.0) {
                            if (features[4] <= 9.26034927368164) {
                                if (features[5] <= 10.159879684448242) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[0] <= 0.9600000381469727) {
                                    if (features[5] <= 8.930133819580078) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 47.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 17; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[3] <= 65.77999877929688) {
                        if (features[15] <= 57.5) {
                            if (features[4] <= 19.347869873046875) {
                                if (features[2] <= -4.559999942779541) {
                                    if (features[1] <= 30.239999771118164) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[6] <= 12.750896453857422) {
                                        classes[0] = 0; 
                                        classes[1] = 15; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[0] <= 3.8400001525878906) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            }
                        } else {
                            if (features[0] <= 0.5999999642372131) {
                                if (features[5] <= 22.457082748413086) {
                                    classes[0] = 10; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 44; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[4] <= 21.95629119873047) {
                    classes[0] = 0; 
                    classes[1] = 60; 
                    classes[2] = 0; 
                } else {
                    if (features[10] <= 42.0) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[12] <= -42.0) {
                if (features[6] <= 12.619222640991211) {
                    if (features[15] <= 81.0) {
                        classes[0] = 5; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 69; 
                }
            } else {
                if (features[2] <= 11.519999504089355) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_3(float features[]) {
    int classes[3];
    
    if (features[5] <= 14.992818832397461) {
        if (features[3] <= 44.400001525878906) {
            if (features[1] <= 69.0) {
                if (features[14] <= -6.0) {
                    if (features[12] <= -54.0) {
                        if (features[5] <= 13.188783645629883) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        }
                    } else {
                        if (features[5] <= 5.431867599487305) {
                            if (features[7] <= 0.4981490969657898) {
                                if (features[5] <= 4.799749851226807) {
                                    classes[0] = 167; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[2] <= -1.6800000667572021) {
                                        classes[0] = 55; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[3] <= 3.3400001525878906) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[3] <= 0.6800000071525574) {
                                    if (features[8] <= 6.0) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                } else {
                                    if (features[7] <= 1.2888760566711426) {
                                        classes[0] = 22; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[7] <= 1.336857557296753) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[5] <= 6.058489799499512) {
                                if (features[1] <= 2.2799999713897705) {
                                    if (features[5] <= 5.999975204467773) {
                                        if (features[11] <= 0.5) {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= -18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        }
                                    }
                                } else {
                                    if (features[0] <= -1.3199999332427979) {
                                        if (features[5] <= 5.792947769165039) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[11] <= 26.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 14; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 8.876144409179688) {
                                    if (features[11] <= 6.5) {
                                        if (features[0] <= 4.320000171661377) {
                                            classes[0] = 47; 
                                            classes[1] = 4; 
                                            classes[2] = 11; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= -3.239999771118164) {
                                            classes[0] = 31; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 156; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= -36.599998474121094) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    } else {
                                        if (features[11] <= 16.0) {
                                            classes[0] = 18; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 126; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[0] <= 21.479999542236328) {
                        if (features[2] <= 35.63999938964844) {
                            if (features[10] <= 54.0) {
                                if (features[7] <= 2.848320960998535) {
                                    if (features[1] <= -31.200000762939453) {
                                        if (features[12] <= -42.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 19; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[7] <= 1.8682441711425781) {
                                            classes[0] = 670; 
                                            classes[1] = 3; 
                                            classes[2] = 6; 
                                        } else {
                                            classes[0] = 21; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= 3.5) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[5] <= 8.824760437011719) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            if (features[3] <= 4.880000114440918) {
                                if (features[2] <= 37.44000244140625) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= -0.35999998450279236) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 5; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[3] <= 40.099998474121094) {
                                    if (features[2] <= 51.47999954223633) {
                                        if (features[12] <= -6.0) {
                                            classes[0] = 115; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[0] <= 2.325000047683716) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 36; 
                                            classes[1] = 4; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 7.452691078186035) {
                                        if (features[1] <= -4.440000057220459) {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 12.996659278869629) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                if (features[6] <= 4.727957725524902) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    if (features[5] <= 10.209859848022461) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            }
        } else {
            if (features[11] <= 88.5) {
                if (features[9] <= 42.0) {
                    if (features[6] <= 10.847513198852539) {
                        if (features[1] <= 14.399999618530273) {
                            if (features[9] <= -18.0) {
                                if (features[4] <= 5.554920196533203) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[11] <= 55.5) {
                                    if (features[6] <= 8.668587684631348) {
                                        if (features[11] <= 46.5) {
                                            classes[0] = 13; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 85; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 44.970001220703125) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 23; 
                                            classes[1] = 40; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[11] <= 76.0) {
                                        if (features[6] <= 9.145354270935059) {
                                            classes[0] = 149; 
                                            classes[1] = 42; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 87; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[6] <= 7.620240211486816) {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 12; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[5] <= 11.172679901123047) {
                                if (features[15] <= 71.5) {
                                    classes[0] = 0; 
                                    classes[1] = 18; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.3535533845424652) {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= 6.840000152587891) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[14] <= -6.0) {
                            if (features[4] <= 7.902061939239502) {
                                if (features[5] <= 7.626965045928955) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[11] <= 50.5) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 60; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[11] <= 47.5) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                if (features[8] <= 18.0) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[5] <= 12.697223663330078) {
                                        if (features[2] <= 15.84000015258789) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 35; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[5] <= 12.509261131286621) {
                        if (features[10] <= 0.0) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= 28.439998626708984) {
                                if (features[8] <= 30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 27; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[2] <= 23.639999389648438) {
                            if (features[14] <= -24.0) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[8] <= 30.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[13] <= 6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[6] <= 7.077578544616699) {
                    if (features[0] <= 5.279999732971191) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 36; 
                    classes[2] = 0; 
                }
            }
        }
    } else {
        if (features[12] <= -42.0) {
            if (features[15] <= 58.5) {
                if (features[14] <= -30.0) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 111; 
                } else {
                    if (features[8] <= 42.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[11] <= 16.5) {
                            if (features[10] <= 54.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[7] <= 0.5494611263275146) {
                                if (features[11] <= 26.5) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[10] <= 54.0) {
                                        if (features[1] <= -9.600000381469727) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 21; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 47; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 6; 
                classes[2] = 0; 
            }
        } else {
            if (features[15] <= 43.5) {
                if (features[0] <= 4.320000171661377) {
                    if (features[6] <= 6.13984489440918) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        if (features[14] <= 18.0) {
                            if (features[12] <= -30.0) {
                                if (features[2] <= 12.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 22; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[7] <= 0.6060914993286133) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[11] <= 25.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[2] <= 17.399999618530273) {
                        if (features[0] <= 9.0) {
                            if (features[6] <= 9.085472106933594) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[15] <= 9.5) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[7] <= 0.23560602962970734) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 7; 
                        }
                    }
                }
            } else {
                if (features[3] <= 65.77999877929688) {
                    if (features[3] <= 63.869998931884766) {
                        if (features[4] <= 25.490646362304688) {
                            if (features[9] <= 30.0) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                                classes[2] = 0; 
                            } else {
                                if (features[10] <= 30.0) {
                                    if (features[7] <= 0.7038533687591553) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 49; 
                    classes[2] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_4(float features[]) {
    int classes[3];
    
    if (features[4] <= 19.782636642456055) {
        if (features[5] <= 13.38131332397461) {
            if (features[13] <= 6.0) {
                if (features[11] <= 44.5) {
                    if (features[4] <= 18.56158447265625) {
                        if (features[6] <= 17.063220977783203) {
                            if (features[2] <= 42.36000061035156) {
                                if (features[10] <= 26.0) {
                                    if (features[1] <= 8.760000228881836) {
                                        if (features[12] <= -42.0) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 688; 
                                            classes[1] = 20; 
                                            classes[2] = 29; 
                                        }
                                    } else {
                                        if (features[7] <= 0.0707106813788414) {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                            classes[2] = 10; 
                                        } else {
                                            classes[0] = 84; 
                                            classes[1] = 18; 
                                            classes[2] = 4; 
                                        }
                                    }
                                } else {
                                    if (features[7] <= 2.8986968994140625) {
                                        if (features[14] <= 22.0) {
                                            classes[0] = 319; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 242; 
                                            classes[1] = 6; 
                                            classes[2] = 6; 
                                        }
                                    } else {
                                        if (features[5] <= 8.269635200500488) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[8] <= 18.0) {
                                    if (features[6] <= 5.911116123199463) {
                                        if (features[1] <= -26.759998321533203) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 3.52609920501709) {
                                            classes[0] = 1; 
                                            classes[1] = 6; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= 15.5) {
                                        if (features[12] <= -6.0) {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[14] <= 42.0) {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[5] <= 6.240761756896973) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            } else {
                                if (features[10] <= 6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    }
                } else {
                    if (features[15] <= 89.0) {
                        if (features[9] <= -6.0) {
                            if (features[7] <= 2.0884575843811035) {
                                if (features[3] <= 79.76000213623047) {
                                    classes[0] = 0; 
                                    classes[1] = 19; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[5] <= 10.836670875549316) {
                                if (features[0] <= 0.4848979711532593) {
                                    if (features[1] <= 14.520000457763672) {
                                        if (features[13] <= -30.0) {
                                            classes[0] = 7; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 193; 
                                            classes[1] = 34; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= 19.440000534057617) {
                                        if (features[11] <= 55.5) {
                                            classes[0] = 74; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 183; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= 29.400001525878906) {
                                    if (features[1] <= 18.119998931884766) {
                                        if (features[5] <= 11.003519058227539) {
                                            classes[0] = 2; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 50; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[15] <= 71.0) {
                                        if (features[0] <= -5.519999980926514) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 12; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[12] <= -18.0) {
                    if (features[10] <= 30.0) {
                        if (features[11] <= 67.0) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 19; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[2] <= 41.040000915527344) {
                            if (features[4] <= 17.484786987304688) {
                                if (features[13] <= 30.0) {
                                    if (features[15] <= 74.5) {
                                        classes[0] = 23; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[15] <= 33.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[9] <= 60.0) {
                                if (features[4] <= 10.16781997680664) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[9] <= 24.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[3] <= 50.790000915527344) {
                            classes[0] = 59; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[2] <= -23.520000457763672) {
                if (features[3] <= 18.709999084472656) {
                    if (features[15] <= 1.5) {
                        if (features[9] <= 42.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                } else {
                    classes[0] = 11; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                }
            } else {
                if (features[3] <= 45.519996643066406) {
                    if (features[2] <= 38.400001525878906) {
                        if (features[3] <= 12.069999694824219) {
                            if (features[9] <= 42.0) {
                                if (features[1] <= -0.24000000953674316) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        } else {
                            if (features[0] <= -1.3199999332427979) {
                                if (features[10] <= 30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 19; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[1] <= 7.800000190734863) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 12; 
                        }
                    }
                } else {
                    if (features[13] <= -102.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        if (features[1] <= -27.0) {
                            if (features[0] <= 4.680000305175781) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[5] <= 14.290037155151367) {
                                if (features[0] <= 2.5199999809265137) {
                                    if (features[0] <= -1.7999999523162842) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[2] <= 2.0399999618530273) {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[11] <= 66.0) {
                                    if (features[6] <= 8.087823867797852) {
                                        if (features[7] <= 1.1754601001739502) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 19; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 51; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[15] <= 58.5) {
            if (features[4] <= 24.785938262939453) {
                if (features[4] <= 24.19158363342285) {
                    if (features[11] <= 36.5) {
                        if (features[14] <= -54.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 8; 
                        } else {
                            if (features[9] <= -18.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 4; 
                            } else {
                                if (features[5] <= 21.716358184814453) {
                                    if (features[13] <= 36.0) {
                                        if (features[1] <= -35.279998779296875) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[15] <= 13.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 6; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 47.91999816894531) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 19; 
                        } else {
                            if (features[5] <= 18.796720504760742) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    }
                } else {
                    classes[0] = 9; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                }
            } else {
                if (features[8] <= 42.0) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    if (features[9] <= 42.0) {
                        if (features[5] <= 15.812555313110352) {
                            if (features[15] <= 44.5) {
                                if (features[3] <= 31.299999237060547) {
                                    if (features[5] <= 11.99323844909668) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                } else {
                                    if (features[6] <= 13.041057586669922) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 35.80432891845703) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[1] <= -8.039999961853027) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 38; 
                            } else {
                                if (features[13] <= -78.0) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.9798479676246643) {
                                        if (features[7] <= 0.4949747622013092) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 6; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[11] <= 22.5) {
                            if (features[14] <= -12.0) {
                                if (features[2] <= 18.959999084472656) {
                                    if (features[15] <= 19.5) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 15; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[1] <= 5.159999847412109) {
                                if (features[4] <= 26.876995086669922) {
                                    if (features[13] <= -66.0) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 25; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 108; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[0] <= 0.9673469662666321) {
                if (features[1] <= -3.240000009536743) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                    classes[2] = 0; 
                } else {
                    if (features[11] <= 75.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[15] <= 89.0) {
                    classes[0] = 10; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_5(float features[]) {
    int classes[3];
    
    if (features[3] <= 43.41999816894531) {
        if (features[14] <= -54.0) {
            if (features[12] <= -30.0) {
                if (features[6] <= 7.8189802169799805) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 54; 
                }
            } else {
                if (features[6] <= 15.18891716003418) {
                    if (features[3] <= 1.0600000619888306) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 19; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            if (features[12] <= -42.0) {
                if (features[14] <= -18.0) {
                    if (features[9] <= 66.0) {
                        if (features[1] <= -4.559999942779541) {
                            if (features[0] <= 5.159999847412109) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 13; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[4] <= 18.291908264160156) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[5] <= 15.553611755371094) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= -0.8399999141693115) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 27; 
                    }
                } else {
                    if (features[9] <= 66.0) {
                        if (features[1] <= -9.359999656677246) {
                            if (features[13] <= -42.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 4; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[11] <= 37.5) {
                                if (features[1] <= 16.079999923706055) {
                                    classes[0] = 25; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= -1.440000057220459) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[13] <= -42.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 11.045798301696777) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 17; 
                        }
                    }
                }
            } else {
                if (features[4] <= 17.440073013305664) {
                    if (features[11] <= 6.5) {
                        if (features[2] <= 41.79428482055664) {
                            if (features[1] <= 14.039999961853027) {
                                if (features[5] <= 5.431867599487305) {
                                    if (features[2] <= 28.68000030517578) {
                                        if (features[5] <= 4.641225814819336) {
                                            classes[0] = 256; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 128; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        }
                                    } else {
                                        if (features[2] <= 33.23999786376953) {
                                            classes[0] = 40; 
                                            classes[1] = 0; 
                                            classes[2] = 10; 
                                        } else {
                                            classes[0] = 41; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 0.8400000333786011) {
                                        if (features[11] <= 3.5) {
                                            classes[0] = 50; 
                                            classes[1] = 2; 
                                            classes[2] = 33; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= 14.399999618530273) {
                                            classes[0] = 27; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 69; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= -6.0) {
                                    if (features[0] <= -4.079999923706055) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 9; 
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[9] <= 6.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[15] <= 3.5) {
                            if (features[4] <= 6.470288276672363) {
                                if (features[7] <= 2.2607908248901367) {
                                    if (features[9] <= 6.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[7] <= 1.4248839616775513) {
                                if (features[5] <= 14.43437385559082) {
                                    if (features[2] <= 64.94999694824219) {
                                        if (features[9] <= 90.0) {
                                            classes[0] = 642; 
                                            classes[1] = 11; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[11] <= 17.5) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 37.08000183105469) {
                                        if (features[0] <= 3.4800000190734863) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[10] <= 66.0) {
                                    if (features[6] <= 17.37447738647461) {
                                        if (features[9] <= 6.0) {
                                            classes[0] = 52; 
                                            classes[1] = 10; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 173; 
                                            classes[1] = 8; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[11] <= 21.5) {
                                        if (features[7] <= 1.910602331161499) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 13; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[9] <= 66.0) {
                        if (features[6] <= 10.622146606445312) {
                            if (features[7] <= 1.177548885345459) {
                                classes[0] = 7; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[4] <= 20.502843856811523) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[6] <= 9.6599702835083) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[9] <= 42.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[5] <= 9.40282154083252) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[8] <= 54.0) {
            if (features[15] <= 84.5) {
                if (features[5] <= 13.008234977722168) {
                    if (features[14] <= -30.0) {
                        if (features[12] <= -48.0) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= -46.08000183105469) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                if (features[6] <= 6.058489799499512) {
                                    if (features[6] <= 6.048776626586914) {
                                        if (features[15] <= 44.5) {
                                            classes[0] = 3; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 6.248037338256836) {
                                        if (features[0] <= 0.12000001966953278) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[6] <= 7.053606033325195) {
                                            classes[0] = 8; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 57; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[1] <= 14.15999984741211) {
                            if (features[5] <= 10.702823638916016) {
                                if (features[0] <= 0.8400000333786011) {
                                    if (features[1] <= -10.800000190734863) {
                                        if (features[15] <= 61.5) {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= -5.159999847412109) {
                                            classes[0] = 32; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 168; 
                                            classes[1] = 45; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 65.21000671386719) {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 54; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 53; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= 42.599998474121094) {
                                            classes[0] = 76; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[9] <= 18.0) {
                                    if (features[7] <= 1.4729633331298828) {
                                        if (features[0] <= -1.559999942779541) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 21; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 12.532840728759766) {
                                        if (features[13] <= -42.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 30; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 72.1500015258789) {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[15] <= 72.5) {
                                if (features[0] <= 2.2799999713897705) {
                                    classes[0] = 0; 
                                    classes[1] = 38; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[6] <= 8.16968822479248) {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 24.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[8] <= 18.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[4] <= 10.257868766784668) {
                                        if (features[1] <= 28.68000030517578) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[4] <= 20.581409454345703) {
                        if (features[1] <= 32.040000915527344) {
                            if (features[11] <= 66.5) {
                                if (features[10] <= 18.0) {
                                    if (features[12] <= -30.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[9] <= 30.0) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 64.1199951171875) {
                                        if (features[11] <= 53.5) {
                                            classes[0] = 5; 
                                            classes[1] = 2; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= -22.68000030517578) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= -1.2000000476837158) {
                                        if (features[3] <= 76.5) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= 79.5) {
                                            classes[0] = 1; 
                                            classes[1] = 36; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 8; 
                    }
                }
            } else {
                if (features[3] <= 87.83999633789062) {
                    if (features[6] <= 7.507279396057129) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 52; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[13] <= -54.0) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 43; 
            } else {
                if (features[5] <= 13.794639587402344) {
                    if (features[0] <= -2.2800002098083496) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 15; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[11] <= 75.5) {
                        if (features[4] <= 26.68570899963379) {
                            if (features[12] <= -54.0) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        } else {
                            if (features[2] <= -21.0) {
                                if (features[11] <= 47.5) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 26; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_6(float features[]) {
    int classes[3];
    
    if (features[15] <= 40.5) {
        if (features[5] <= 15.008533477783203) {
            if (features[3] <= 3.9200000762939453) {
                if (features[14] <= -54.0) {
                    if (features[5] <= 7.675654411315918) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[8] <= 18.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 9; 
                        }
                    }
                } else {
                    if (features[3] <= 3.700000047683716) {
                        if (features[10] <= 60.0) {
                            if (features[7] <= 0.424935519695282) {
                                if (features[5] <= 5.863725185394287) {
                                    if (features[9] <= 18.0) {
                                        if (features[1] <= -0.11999999731779099) {
                                            classes[0] = 246; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 212; 
                                            classes[1] = 2; 
                                            classes[2] = 19; 
                                        }
                                    } else {
                                        if (features[5] <= 5.74979305267334) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 0.9600000381469727) {
                                        if (features[10] <= -6.0) {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 20; 
                                        }
                                    } else {
                                        classes[0] = 24; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[12] <= -6.0) {
                                    if (features[9] <= 30.0) {
                                        if (features[0] <= -3.4800000190734863) {
                                            classes[0] = 13; 
                                            classes[1] = 2; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 66; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[1] <= 17.279998779296875) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 30.0) {
                                        if (features[1] <= 2.1599998474121094) {
                                            classes[0] = 21; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 4; 
                                        }
                                    } else {
                                        if (features[7] <= 0.4954284131526947) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[6] <= 6.311272144317627) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        }
                    }
                }
            } else {
                if (features[12] <= -54.0) {
                    if (features[2] <= 1.2000000476837158) {
                        if (features[9] <= 42.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 6; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[5] <= 12.796772003173828) {
                            classes[0] = 10; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[5] <= 13.958264350891113) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[10] <= 54.0) {
                        if (features[6] <= 1.2121829986572266) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[9] <= -54.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[6] <= 24.12889862060547) {
                                    if (features[1] <= -44.279998779296875) {
                                        if (features[1] <= -45.36000061035156) {
                                            classes[0] = 25; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= 3.7199997901916504) {
                                            classes[0] = 324; 
                                            classes[1] = 22; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 495; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[9] <= 66.0) {
                            if (features[6] <= 6.151676177978516) {
                                if (features[5] <= 7.929351329803467) {
                                    if (features[6] <= 5.991415977478027) {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[13] <= -78.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    if (features[1] <= -10.200000762939453) {
                                        if (features[4] <= 6.614443302154541) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 43; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[7] <= 1.1018844842910767) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[8] <= 30.0) {
                if (features[4] <= 10.463622093200684) {
                    if (features[12] <= -18.0) {
                        if (features[14] <= 18.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 12; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[3] <= 19.770000457763672) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[9] <= 66.0) {
                    if (features[14] <= -42.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 32; 
                    } else {
                        if (features[6] <= 7.272920608520508) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            if (features[3] <= 32.16999816894531) {
                                if (features[5] <= 16.46514892578125) {
                                    if (features[15] <= 12.5) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                } else {
                                    if (features[1] <= -52.31999969482422) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        if (features[11] <= 14.0) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[12] <= -36.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 9; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 54; 
                }
            }
        }
    } else {
        if (features[5] <= 12.696125030517578) {
            if (features[1] <= 14.399999618530273) {
                if (features[3] <= 88.3800048828125) {
                    if (features[9] <= 18.0) {
                        if (features[0] <= 0.4848979711532593) {
                            if (features[6] <= 9.447250366210938) {
                                if (features[12] <= -30.0) {
                                    if (features[7] <= 0.4830418527126312) {
                                        if (features[2] <= 34.91999816894531) {
                                            classes[0] = 1; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 33.959999084472656) {
                                        if (features[5] <= 6.416560173034668) {
                                            classes[0] = 18; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 18; 
                                            classes[1] = 26; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[6] <= 8.121142387390137) {
                                            classes[0] = 21; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[9] <= 6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= -8.520000457763672) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 30; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[8] <= 18.0) {
                                classes[0] = 26; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[9] <= -18.0) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[2] <= 32.87999725341797) {
                                        if (features[2] <= 23.639999389648438) {
                                            classes[0] = 37; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 15; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 42.0) {
                                            classes[0] = 42; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 54.099998474121094) {
                            if (features[10] <= 30.0) {
                                if (features[11] <= 54.5) {
                                    if (features[7] <= 0.44248825311660767) {
                                        if (features[5] <= 8.505404472351074) {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 34; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[12] <= -30.0) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[15] <= 48.5) {
                                    if (features[6] <= 7.397190093994141) {
                                        if (features[6] <= 7.000055313110352) {
                                            classes[0] = 6; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= 46.5) {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 42.0) {
                                        if (features[7] <= 0.4944418668746948) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[11] <= 83.5) {
                                if (features[11] <= 72.5) {
                                    if (features[2] <= 39.720001220703125) {
                                        if (features[1] <= 11.760000228881836) {
                                            classes[0] = 152; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 66.66000366210938) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 21.795272827148438) {
                                        if (features[3] <= 71.8499984741211) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 52; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[3] <= 87.55999755859375) {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 13; 
                    classes[2] = 0; 
                }
            } else {
                if (features[10] <= -6.0) {
                    if (features[4] <= 9.040672302246094) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[3] <= 43.540000915527344) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[9] <= 42.0) {
                            if (features[13] <= 6.0) {
                                if (features[15] <= 80.5) {
                                    classes[0] = 0; 
                                    classes[1] = 15; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[15] <= 87.5) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[11] <= 66.5) {
                                if (features[10] <= 30.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 27; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[4] <= 20.248493194580078) {
                if (features[6] <= 13.548843383789062) {
                    if (features[10] <= -6.0) {
                        if (features[6] <= 6.026239395141602) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[1] <= -41.400001525878906) {
                            if (features[12] <= -30.0) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[5] <= 13.922700881958008) {
                                if (features[12] <= -30.0) {
                                    if (features[13] <= -36.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 17.07805633544922) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[7] <= 1.7886583805084229) {
                                        if (features[4] <= 7.120476722717285) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 28; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[7] <= 1.5048620700836182) {
                                    if (features[9] <= 18.0) {
                                        if (features[0] <= 2.2800002098083496) {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 69; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[0] <= -0.24000003933906555) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[3] <= 54.86000061035156) {
                        if (features[13] <= -78.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[10] <= 42.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[5] <= 14.013155937194824) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[8] <= 42.0) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    if (features[12] <= -66.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 58; 
                    } else {
                        if (features[10] <= 24.0) {
                            if (features[4] <= 23.914779663085938) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[9] <= 42.0) {
                                if (features[1] <= -1.559999942779541) {
                                    if (features[0] <= -0.6000000238418579) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 15; 
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 25; 
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
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_7(float features[]) {
    int classes[3];
    
    if (features[5] <= 13.7794828414917) {
        if (features[3] <= 38.72999954223633) {
            if (features[2] <= 42.23999786376953) {
                if (features[2] <= 0.11999999731779099) {
                    if (features[14] <= -18.0) {
                        if (features[13] <= -6.0) {
                            if (features[2] <= -4.440000057220459) {
                                if (features[13] <= -30.0) {
                                    if (features[4] <= 5.625872611999512) {
                                        if (features[4] <= 4.468543529510498) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[7] <= 6.974196434020996) {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[0] <= -2.7547826766967773) {
                                        if (features[15] <= 4.5) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[11] <= 5.0) {
                                            classes[0] = 146; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 107; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[5] <= 10.707523345947266) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[3] <= 3.7799999713897705) {
                                if (features[1] <= 4.320000171661377) {
                                    classes[0] = 15; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 7; 
                                }
                            } else {
                                if (features[6] <= 6.471267223358154) {
                                    if (features[7] <= 2.4244537353515625) {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= 1.6800000667572021) {
                                        if (features[4] <= 1.4796580076217651) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.9333532452583313) {
                                            classes[0] = 15; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 36; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 5.6176958084106445) {
                            if (features[11] <= 21.5) {
                                if (features[1] <= 1.3199999332427979) {
                                    classes[0] = 43; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[2] <= -1.440000057220459) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 2.036220073699951) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            } else {
                                if (features[3] <= 22.790000915527344) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[15] <= 2.5) {
                                if (features[6] <= 6.220319747924805) {
                                    if (features[0] <= -0.11999999731779099) {
                                        if (features[11] <= 1.5) {
                                            classes[0] = 3; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        }
                                    } else {
                                        if (features[4] <= 2.036220073699951) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 10; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 8; 
                                        }
                                    }
                                } else {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[0] <= -5.039999961853027) {
                                    if (features[7] <= 0.713558554649353) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[13] <= -6.0) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[6] <= 5.949871063232422) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[1] <= -68.63999938964844) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[9] <= 90.0) {
                            if (features[9] <= -30.0) {
                                if (features[11] <= 22.5) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 1.2000000476837158) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[5] <= 3.1239430904388428) {
                                    if (features[10] <= 32.0) {
                                        classes[0] = 55; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[2] <= 26.880001068115234) {
                                            classes[0] = 32; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 55; 
                                            classes[1] = 2; 
                                            classes[2] = 12; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -32.279998779296875) {
                                        if (features[3] <= 10.380000114440918) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 657; 
                                            classes[1] = 3; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 61; 
                                            classes[1] = 1; 
                                            classes[2] = 3; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                }
            } else {
                if (features[5] <= 4.145866394042969) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                    classes[2] = 0; 
                } else {
                    if (features[5] <= 4.534666061401367) {
                        if (features[7] <= 0.3604189157485962) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    } else {
                        if (features[3] <= 12.220000267028809) {
                            if (features[12] <= -6.0) {
                                classes[0] = 5; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 10.020000457763672) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            }
                        } else {
                            if (features[1] <= 50.63999938964844) {
                                if (features[6] <= 6.0705976486206055) {
                                    if (features[6] <= 6.021873950958252) {
                                        if (features[10] <= 54.0) {
                                            classes[0] = 18; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[0] <= 0.8400000333786011) {
                                        if (features[0] <= 0.48000001907348633) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[15] <= 15.5) {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 32; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 7.900448322296143) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[15] <= 88.0) {
                if (features[1] <= 15.960000038146973) {
                    if (features[5] <= 12.358322143554688) {
                        if (features[9] <= 6.0) {
                            if (features[0] <= 1.2000000476837158) {
                                if (features[5] <= 6.726590156555176) {
                                    if (features[6] <= 3.1633100509643555) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= -10.440000534057617) {
                                        if (features[10] <= 54.0) {
                                            classes[0] = 3; 
                                            classes[1] = 28; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 9.187263488769531) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[0] <= 4.800000190734863) {
                                    if (features[1] <= -39.720001220703125) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[5] <= 6.397495746612549) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 46; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[10] <= 84.0) {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[0] <= -4.199999809265137) {
                                if (features[3] <= 78.41999816894531) {
                                    if (features[7] <= 1.0770035982131958) {
                                        classes[0] = 51; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[8] <= 18.0) {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[2] <= -13.920000076293945) {
                                    if (features[4] <= 10.558187484741211) {
                                        if (features[5] <= 8.263984680175781) {
                                            classes[0] = 6; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 21; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= -14.639999389648438) {
                                            classes[0] = 26; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= 6.0) {
                                        if (features[1] <= 7.319999694824219) {
                                            classes[0] = 249; 
                                            classes[1] = 17; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 30; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= 23.15999984741211) {
                                            classes[0] = 4; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 138; 
                                            classes[1] = 31; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[10] <= 42.0) {
                            if (features[11] <= 67.5) {
                                if (features[11] <= 60.5) {
                                    if (features[7] <= 0.9142995476722717) {
                                        if (features[3] <= 53.58000183105469) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[5] <= 13.217445373535156) {
                                    if (features[1] <= 3.6000001430511475) {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[2] <= -8.639999389648438) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[9] <= 30.0) {
                                classes[0] = 0; 
                                classes[1] = 14; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[7] <= 1.3747011423110962) {
                        if (features[15] <= 43.5) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[6] <= 11.832212448120117) {
                                if (features[4] <= 11.69489574432373) {
                                    classes[0] = 0; 
                                    classes[1] = 29; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 73.33999633789062) {
                                        if (features[2] <= 9.84000015258789) {
                                            classes[0] = 2; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[7] <= 0.2020305097103119) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[14] <= 6.0) {
                            classes[0] = 13; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 25; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[8] <= 42.0) {
            if (features[3] <= 40.55999755859375) {
                if (features[6] <= 11.557113647460938) {
                    if (features[1] <= -37.08000183105469) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        if (features[15] <= 11.5) {
                            if (features[8] <= 30.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            if (features[6] <= 7.371040344238281) {
                                if (features[12] <= -30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 24; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[0] <= 0.12000001966953278) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 6; 
                    } else {
                        if (features[14] <= -18.0) {
                            if (features[5] <= 15.655853271484375) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            } else {
                                if (features[5] <= 20.28032875061035) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[10] <= 96.0) {
                    if (features[2] <= -30.599998474121094) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[11] <= 66.5) {
                            if (features[11] <= 64.5) {
                                if (features[13] <= -66.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 4.079999923706055) {
                                        classes[0] = 0; 
                                        classes[1] = 34; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= -2.760000228881836) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[4] <= 8.057896614074707) {
                                if (features[5] <= 15.247346878051758) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 69; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[4] <= 24.965660095214844) {
                if (features[3] <= 57.87000274658203) {
                    if (features[10] <= 18.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 9; 
                    } else {
                        if (features[2] <= 10.920000076293945) {
                            if (features[6] <= 15.32994556427002) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[7] <= 0.8369039297103882) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            if (features[11] <= 15.5) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[0] <= -1.8000000715255737) {
                                    if (features[13] <= -30.0) {
                                        if (features[7] <= 0.48759379982948303) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 20; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                    classes[2] = 0; 
                }
            } else {
                if (features[6] <= 12.843358993530273) {
                    if (features[11] <= 29.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 6; 
                    } else {
                        if (features[5] <= 14.572905540466309) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[7] <= 0.3156532347202301) {
                        if (features[6] <= 17.379730224609375) {
                            if (features[3] <= 50.0) {
                                if (features[4] <= 34.09614562988281) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 46; 
                        }
                    } else {
                        if (features[9] <= 30.0) {
                            if (features[13] <= -54.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 12; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 108; 
                        }
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_8(float features[]) {
    int classes[3];
    
    if (features[8] <= 42.0) {
        if (features[15] <= 44.5) {
            if (features[7] <= 8.165521621704102) {
                if (features[11] <= 15.5) {
                    if (features[0] <= 4.680000305175781) {
                        if (features[6] <= 9.503194808959961) {
                            if (features[12] <= -4.0) {
                                if (features[2] <= 2.0399999618530273) {
                                    if (features[10] <= -18.0) {
                                        classes[0] = 31; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[13] <= -6.0) {
                                            classes[0] = 89; 
                                            classes[1] = 7; 
                                            classes[2] = 9; 
                                        } else {
                                            classes[0] = 38; 
                                            classes[1] = 7; 
                                            classes[2] = 14; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 47.519996643066406) {
                                        if (features[4] <= 1.7520360946655273) {
                                            classes[0] = 43; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 385; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[5] <= 5.073265075683594) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[9] <= 6.0) {
                                    if (features[0] <= 0.11999999731779099) {
                                        classes[0] = 62; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[6] <= 5.911116123199463) {
                                            classes[0] = 100; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 14; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= 3.5) {
                                        if (features[5] <= 5.37986946105957) {
                                            classes[0] = 52; 
                                            classes[1] = 7; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 12; 
                                        }
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[15] <= 12.0) {
                                if (features[3] <= 0.6200000047683716) {
                                    if (features[0] <= -0.48000001907348633) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    } else {
                                        if (features[5] <= 8.703067779541016) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 3.0) {
                                        if (features[4] <= 7.006017684936523) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 4; 
                                        }
                                    } else {
                                        if (features[5] <= 7.304309368133545) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= 0.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 5; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[1] <= -16.31999969482422) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[9] <= 24.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 7; 
                            } else {
                                if (features[8] <= 30.0) {
                                    if (features[2] <= 17.760000228881836) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[1] <= 82.80000305175781) {
                        if (features[11] <= 40.5) {
                            if (features[0] <= -3.239999771118164) {
                                if (features[7] <= 2.0130057334899902) {
                                    if (features[6] <= 5.135864734649658) {
                                        if (features[4] <= 7.64755916595459) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= 6.479999542236328) {
                                            classes[0] = 31; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 47; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 10.750632286071777) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[5] <= 13.694835662841797) {
                                    if (features[2] <= 39.23999786376953) {
                                        if (features[9] <= -30.0) {
                                            classes[0] = 19; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 410; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 3.462559700012207) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 83; 
                                            classes[1] = 3; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 15.375821113586426) {
                                        if (features[2] <= 38.52000045776367) {
                                            classes[0] = 30; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[15] <= 41.5) {
                                if (features[13] <= -30.0) {
                                    if (features[6] <= 12.934232711791992) {
                                        if (features[12] <= -18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[10] <= 30.0) {
                                        if (features[12] <= -18.0) {
                                            classes[0] = 2; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= -6.480000019073486) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 28; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[13] <= 18.0) {
                                    if (features[9] <= -18.0) {
                                        if (features[0] <= 4.320000171661377) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 19; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 43; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
                classes[2] = 0; 
            }
        } else {
            if (features[5] <= 13.044219970703125) {
                if (features[11] <= 89.5) {
                    if (features[13] <= 6.0) {
                        if (features[1] <= 14.520000457763672) {
                            if (features[4] <= 13.204450607299805) {
                                if (features[0] <= 1.559999942779541) {
                                    if (features[5] <= 11.202030181884766) {
                                        if (features[6] <= 9.56002426147461) {
                                            classes[0] = 99; 
                                            classes[1] = 40; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 52; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 12.207941055297852) {
                                            classes[0] = 2; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[0] <= 3.0) {
                                        if (features[3] <= 75.55999755859375) {
                                            classes[0] = 64; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 66.16999816894531) {
                                            classes[0] = 42; 
                                            classes[1] = 17; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 24; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 9.436342239379883) {
                                    if (features[11] <= 74.0) {
                                        if (features[2] <= 33.47999954223633) {
                                            classes[0] = 13; 
                                            classes[1] = 21; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 19; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[9] <= 6.0) {
                                        if (features[3] <= 59.81999969482422) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 9.617136001586914) {
                                            classes[0] = 35; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[10] <= -6.0) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[1] <= 15.960000038146973) {
                                    if (features[8] <= 18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 29; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[15] <= 67.0) {
                            if (features[1] <= 26.399999618530273) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[9] <= 42.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 16; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 20; 
                    classes[2] = 0; 
                }
            } else {
                if (features[13] <= -114.0) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    if (features[4] <= 7.954311370849609) {
                        if (features[11] <= 74.0) {
                            classes[0] = 0; 
                            classes[1] = 10; 
                            classes[2] = 0; 
                        } else {
                            if (features[13] <= -30.0) {
                                if (features[8] <= 18.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[7] <= 0.43725329637527466) {
                            classes[0] = 0; 
                            classes[1] = 57; 
                            classes[2] = 0; 
                        } else {
                            if (features[5] <= 14.285688400268555) {
                                if (features[1] <= 11.880000114440918) {
                                    if (features[2] <= -10.440000534057617) {
                                        if (features[15] <= 66.5) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 14.094683647155762) {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[14] <= 6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 54; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.6701806783676147) {
                                        if (features[0] <= 2.1599998474121094) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[4] <= 25.194610595703125) {
            if (features[3] <= 46.90999984741211) {
                if (features[9] <= 78.0) {
                    if (features[13] <= -30.0) {
                        if (features[6] <= 9.746541976928711) {
                            classes[0] = 5; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 25.68000030517578) {
                                if (features[10] <= 42.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 10; 
                                } else {
                                    if (features[13] <= -48.0) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 6; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[6] <= 18.317737579345703) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                }
                            }
                        }
                    } else {
                        if (features[15] <= 2.5) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            if (features[7] <= 0.4334855377674103) {
                                if (features[12] <= -48.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 11; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[0] <= 2.5199999809265137) {
                        if (features[15] <= 26.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 15; 
                    }
                }
            } else {
                if (features[1] <= 18.0) {
                    if (features[5] <= 14.74145221710205) {
                        if (features[3] <= 74.1500015258789) {
                            if (features[1] <= -7.440000057220459) {
                                if (features[7] <= 0.36723244190216064) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 44; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[6] <= 7.192541122436523) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[5] <= 18.945465087890625) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 6; 
                        }
                    }
                } else {
                    if (features[10] <= 78.0) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            }
        } else {
            if (features[11] <= 22.5) {
                if (features[15] <= 19.0) {
                    if (features[14] <= -30.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 12; 
                    } else {
                        if (features[15] <= 15.0) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                }
            } else {
                if (features[6] <= 12.843358993530273) {
                    if (features[3] <= 31.299999237060547) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    } else {
                        if (features[1] <= -6.360000133514404) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            if (features[15] <= 46.5) {
                                classes[0] = 13; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[8] <= 66.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[5] <= 11.670936584472656) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[13] <= -78.0) {
                            if (features[13] <= -90.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 25; 
                            } else {
                                if (features[5] <= 24.070274353027344) {
                                    if (features[1] <= -25.920000076293945) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 6; 
                                }
                            }
                        } else {
                            if (features[11] <= 45.5) {
                                if (features[3] <= 44.16999816894531) {
                                    if (features[10] <= 78.0) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 66; 
                                    } else {
                                        if (features[5] <= 15.255414962768555) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 7; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= -24.0) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 56; 
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
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_9(float features[]) {
    int classes[3];
    
    if (features[12] <= -54.0) {
        if (features[4] <= 25.755813598632812) {
            if (features[6] <= 13.846349716186523) {
                if (features[3] <= 76.03999328613281) {
                    if (features[11] <= 45.0) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[11] <= 63.5) {
                            classes[0] = 0; 
                            classes[1] = 6; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                    classes[2] = 0; 
                }
            } else {
                if (features[15] <= 48.5) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 11; 
                } else {
                    if (features[2] <= 6.119999885559082) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[6] <= 13.150808334350586) {
                if (features[1] <= 63.47999572753906) {
                    if (features[8] <= 54.0) {
                        if (features[0] <= 0.6000000238418579) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 11; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                if (features[3] <= 14.600000381469727) {
                    if (features[14] <= -48.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[5] <= 14.37149429321289) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[7] <= 0.0989743322134018) {
                            if (features[6] <= 16.50438690185547) {
                                if (features[15] <= 34.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 18; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 144; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[15] <= 44.5) {
            if (features[8] <= 42.0) {
                if (features[11] <= 14.5) {
                    if (features[14] <= -66.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    } else {
                        if (features[9] <= 18.0) {
                            if (features[5] <= 5.434576988220215) {
                                if (features[1] <= -0.35999998450279236) {
                                    if (features[14] <= 30.0) {
                                        classes[0] = 237; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 3.5) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= 30.0) {
                                        if (features[15] <= 6.5) {
                                            classes[0] = 250; 
                                            classes[1] = 4; 
                                            classes[2] = 12; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[3] <= 7.300000190734863) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= -6.0) {
                                    if (features[15] <= 1.5) {
                                        if (features[14] <= -18.0) {
                                            classes[0] = 25; 
                                            classes[1] = 0; 
                                            classes[2] = 6; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 1; 
                                            classes[2] = 25; 
                                        }
                                    } else {
                                        if (features[6] <= 5.685557842254639) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 25; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[8] <= 30.0) {
                                        if (features[2] <= 40.55999755859375) {
                                            classes[0] = 90; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 4; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 2.679999828338623) {
                                if (features[4] <= 5.646738052368164) {
                                    if (features[2] <= -11.880000114440918) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 14.039999961853027) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 13; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= -6.0) {
                                        if (features[1] <= 6.960000038146973) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[4] <= 12.681282043457031) {
                                    if (features[5] <= 10.355676651000977) {
                                        if (features[3] <= 3.2799999713897705) {
                                            classes[0] = 5; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 72; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= -6.0) {
                                            classes[0] = 5; 
                                            classes[1] = 1; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[7] <= 0.45375922322273254) {
                                        if (features[6] <= 19.584800720214844) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[6] <= 22.449642181396484) {
                        if (features[13] <= -30.0) {
                            if (features[11] <= 33.5) {
                                if (features[6] <= 5.210371494293213) {
                                    if (features[3] <= 19.220001220703125) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 5.993600845336914) {
                                        if (features[1] <= -46.68000030517578) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= 4.800000190734863) {
                                            classes[0] = 107; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= -24.0) {
                                    if (features[1] <= -4.679999828338623) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[15] <= 42.5) {
                                        if (features[9] <= -6.0) {
                                            classes[0] = 6; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[10] <= 36.0) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[5] <= 3.144285202026367) {
                                if (features[0] <= 1.4850000143051147) {
                                    if (features[2] <= 0.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[1] <= 71.27999877929688) {
                                    if (features[7] <= 2.3215389251708984) {
                                        if (features[4] <= 17.917924880981445) {
                                            classes[0] = 625; 
                                            classes[1] = 11; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 10.378050804138184) {
                                            classes[0] = 38; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[0] <= 1.2000000476837158) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            if (features[14] <= 0.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[14] <= -42.0) {
                    if (features[12] <= -30.0) {
                        if (features[13] <= 18.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 19; 
                        } else {
                            if (features[15] <= 20.5) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[6] <= 12.853530883789062) {
                        if (features[4] <= 26.02292251586914) {
                            classes[0] = 34; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    } else {
                        if (features[13] <= -18.0) {
                            if (features[3] <= 39.84000015258789) {
                                if (features[0] <= 5.159999847412109) {
                                    if (features[9] <= 0.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 10; 
                        }
                    }
                }
            }
        } else {
            if (features[1] <= 14.520000457763672) {
                if (features[13] <= -30.0) {
                    if (features[3] <= 56.73999786376953) {
                        if (features[9] <= 30.0) {
                            if (features[6] <= 8.551273345947266) {
                                if (features[4] <= 11.332376480102539) {
                                    classes[0] = 16; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[4] <= 12.364250183105469) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[12] <= -42.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                } else {
                                    if (features[7] <= 0.24243661761283875) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[6] <= 13.384729385375977) {
                                            classes[0] = 1; 
                                            classes[1] = 15; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[0] <= 7.319999694824219) {
                            if (features[13] <= -42.0) {
                                if (features[6] <= 7.103426933288574) {
                                    if (features[10] <= 6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 10.974907875061035) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= -66.0) {
                                        if (features[3] <= 80.38999938964844) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[10] <= 6.0) {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 40; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 9.656319618225098) {
                                    if (features[5] <= 9.59896469116211) {
                                        if (features[3] <= 69.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 30.0) {
                                            classes[0] = 1; 
                                            classes[1] = 25; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[5] <= 14.942279815673828) {
                                        if (features[3] <= 83.5) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[3] <= 87.94999694824219) {
                        if (features[14] <= 6.0) {
                            if (features[15] <= 46.5) {
                                if (features[3] <= 46.220001220703125) {
                                    if (features[7] <= 0.46499425172805786) {
                                        if (features[1] <= -0.9600000381469727) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[10] <= 78.0) {
                                    if (features[10] <= -18.0) {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 55.66999816894531) {
                                            classes[0] = 66; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 204; 
                                            classes[1] = 17; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            if (features[11] <= 46.5) {
                                if (features[12] <= -18.0) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[5] <= 6.504125595092773) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[0] <= -3.9600000381469727) {
                                    if (features[1] <= 5.760000228881836) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 10.200000762939453) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -6.840000152587891) {
                                        classes[0] = 21; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[6] <= 6.019448280334473) {
                                            classes[0] = 23; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 71; 
                                            classes[1] = 37; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[8] <= 54.0) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[0] <= 6.480000019073486) {
                    if (features[6] <= 12.034137725830078) {
                        if (features[10] <= -6.0) {
                            if (features[4] <= 10.128935813903809) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[6] <= 9.403593063354492) {
                                classes[0] = 0; 
                                classes[1] = 63; 
                                classes[2] = 0; 
                            } else {
                                if (features[4] <= 9.696850776672363) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[13] <= 6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 17; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[0] <= 1.440000057220459) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[13] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[11] <= 57.5) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_10(float features[]) {
    int classes[3];
    
    if (features[12] <= -42.0) {
        if (features[14] <= -30.0) {
            if (features[15] <= 61.0) {
                if (features[4] <= 16.45404624938965) {
                    if (features[8] <= 30.0) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[6] <= 14.125592231750488) {
                        if (features[6] <= 13.736732482910156) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 8; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 106; 
                    }
                }
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[6] <= 14.915237426757812) {
                if (features[11] <= 53.5) {
                    if (features[0] <= -10.200000762939453) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        if (features[7] <= 2.127021551132202) {
                            if (features[4] <= 14.647207260131836) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            } else {
                                if (features[5] <= 15.362693786621094) {
                                    classes[0] = 39; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[4] <= 22.663990020751953) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[10] <= 42.0) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 6; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    }
                } else {
                    if (features[9] <= 30.0) {
                        if (features[6] <= 9.501946449279785) {
                            if (features[7] <= 0.16413035988807678) {
                                if (features[0] <= 0.48734694719314575) {
                                    if (features[0] <= -2.4000000953674316) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[5] <= 12.697223663330078) {
                                if (features[1] <= -2.5199999809265137) {
                                    if (features[6] <= 10.60773754119873) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[13] <= 6.0) {
                            classes[0] = 0; 
                            classes[1] = 17; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= 30.0) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[5] <= 13.447803497314453) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= -8.399999618530273) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 1.440000057220459) {
                            if (features[1] <= -3.5999999046325684) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 11; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 53; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[4] <= 9.326714515686035) {
            if (features[11] <= 52.5) {
                if (features[2] <= 41.79428482055664) {
                    if (features[5] <= 5.594428062438965) {
                        if (features[6] <= 0.8485281467437744) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            if (features[2] <= -9.0) {
                                classes[0] = 170; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 45.209999084472656) {
                                    if (features[2] <= -8.760000228881836) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        classes[0] = 469; 
                                        classes[1] = 6; 
                                        classes[2] = 9; 
                                    }
                                } else {
                                    if (features[3] <= 46.26000213623047) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[12] <= -6.0) {
                            if (features[2] <= 2.0399999618530273) {
                                if (features[15] <= 6.5) {
                                    if (features[11] <= 2.5) {
                                        if (features[2] <= -12.600000381469727) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 21; 
                                        }
                                    } else {
                                        if (features[1] <= -1.9200000762939453) {
                                            classes[0] = 11; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 1; 
                                            classes[2] = 11; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 44.459999084472656) {
                                        if (features[12] <= -18.0) {
                                            classes[0] = 33; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 146; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 45.13999938964844) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 12; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[11] <= 42.5) {
                                    if (features[1] <= -44.519996643066406) {
                                        if (features[7] <= 0.8369039297103882) {
                                            classes[0] = 5; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 20.31612777709961) {
                                            classes[0] = 292; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[11] <= 45.5) {
                                        if (features[7] <= 0.0989743322134018) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 32; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 3.8499999046325684) {
                                if (features[2] <= -9.84000015258789) {
                                    if (features[9] <= 6.0) {
                                        classes[0] = 20; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[9] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[14] <= -6.0) {
                                        if (features[5] <= 5.977788925170898) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 12; 
                                        }
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 28; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[9] <= 18.0) {
                        if (features[4] <= 3.5788702964782715) {
                            if (features[15] <= 1.5) {
                                if (features[9] <= 6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[7] <= 2.390049695968628) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[7] <= 1.8682441711425781) {
                                if (features[7] <= 0.910843014717102) {
                                    if (features[14] <= 42.0) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[8] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[0] <= 4.680000305175781) {
                                        if (features[6] <= 5.900655746459961) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 16; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 22; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[9] <= 42.0) {
                    if (features[9] <= 30.0) {
                        if (features[5] <= 12.309906959533691) {
                            if (features[3] <= 66.76530456542969) {
                                if (features[1] <= -3.239999771118164) {
                                    if (features[1] <= -14.039999961853027) {
                                        if (features[5] <= 9.962043762207031) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[10] <= 42.0) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= 65.0) {
                                        if (features[3] <= 55.41999816894531) {
                                            classes[0] = 6; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 28; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 8.886795043945312) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[15] <= 87.5) {
                                    if (features[1] <= 8.760000228881836) {
                                        if (features[1] <= -25.439998626708984) {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 72; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 6.245244026184082) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[13] <= -30.0) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= -4.680000305175781) {
                                if (features[4] <= 8.948554992675781) {
                                    if (features[10] <= -18.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[11] <= 56.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 73.19999694824219) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[1] <= 4.440000057220459) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[4] <= 9.038671493530273) {
                        classes[0] = 0; 
                        classes[1] = 27; 
                        classes[2] = 0; 
                    } else {
                        if (features[14] <= 0.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[3] <= 49.19000244140625) {
                if (features[8] <= 54.0) {
                    if (features[5] <= 14.414112091064453) {
                        if (features[4] <= 9.358160018920898) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[4] <= 9.416067123413086) {
                                if (features[3] <= 11.809999465942383) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[6] <= 9.263481140136719) {
                                    if (features[3] <= 39.220001220703125) {
                                        if (features[3] <= 26.779998779296875) {
                                            classes[0] = 107; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 70; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.352733314037323) {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 23; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= -33.47999954223633) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        if (features[4] <= 19.13011932373047) {
                                            classes[0] = 105; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[14] <= -24.0) {
                            if (features[6] <= 8.908452987670898) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                            }
                        } else {
                            if (features[11] <= 25.5) {
                                if (features[6] <= 10.626381874084473) {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 1.6800000667572021) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    }
                                }
                            } else {
                                if (features[7] <= 0.40338942408561707) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[4] <= 29.569250106811523) {
                        if (features[6] <= 9.359121322631836) {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[0] <= 3.119999885559082) {
                                if (features[14] <= -42.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 12; 
                            }
                        }
                    } else {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[5] <= 9.490667343139648) {
                    if (features[4] <= 10.039905548095703) {
                        if (features[5] <= 8.651320457458496) {
                            if (features[0] <= -4.920000076293945) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            } else {
                                if (features[11] <= 67.0) {
                                    if (features[3] <= 58.27000045776367) {
                                        if (features[5] <= 6.051202297210693) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[0] <= 2.0399999618530273) {
                            if (features[14] <= 6.0) {
                                if (features[3] <= 54.91999816894531) {
                                    if (features[1] <= 5.399999618530273) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[13] <= 6.0) {
                                        if (features[3] <= 80.94999694824219) {
                                            classes[0] = 48; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[5] <= 7.521395683288574) {
                                    if (features[9] <= 6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[2] <= 33.0) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[7] <= 0.5054640769958496) {
                                        if (features[1] <= -0.9600000381469727) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 12; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 69.22000122070312) {
                                if (features[1] <= 17.760000228881836) {
                                    classes[0] = 51; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[11] <= 61.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[15] <= 71.0) {
                                    if (features[2] <= 36.47999954223633) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[13] <= -6.0) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[7] <= 0.16413035988807678) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[11] <= 88.5) {
                        if (features[10] <= 42.0) {
                            if (features[13] <= -30.0) {
                                if (features[4] <= 14.445480346679688) {
                                    if (features[11] <= 66.5) {
                                        if (features[10] <= 30.0) {
                                            classes[0] = 3; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 23; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[2] <= 10.079999923706055) {
                                        if (features[7] <= 0.21570955216884613) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= -16.920000076293945) {
                                    if (features[6] <= 8.456202507019043) {
                                        if (features[7] <= 0.959553062915802) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[7] <= 0.2504972219467163) {
                                        if (features[6] <= 11.403361320495605) {
                                            classes[0] = 3; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 18.600000381469727) {
                                            classes[0] = 20; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[6] <= 6.694496154785156) {
                                if (features[7] <= 0.18516401946544647) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[9] <= 36.0) {
                                        if (features[6] <= 5.761869430541992) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[1] <= 8.280000686645508) {
                                    if (features[5] <= 13.17464828491211) {
                                        if (features[7] <= 0.6954234838485718) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 25; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[14] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 39; 
                            classes[2] = 0; 
                        } else {
                            if (features[6] <= 11.884592056274414) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
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
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_11(float features[]) {
    int classes[3];
    
    if (features[9] <= 30.0) {
        if (features[5] <= 13.284202575683594) {
            if (features[3] <= 42.16999816894531) {
                if (features[11] <= 15.5) {
                    if (features[2] <= 36.599998474121094) {
                        if (features[0] <= 4.079999923706055) {
                            if (features[7] <= 0.4748650789260864) {
                                if (features[3] <= 0.029999999329447746) {
                                    if (features[5] <= 5.9631195068359375) {
                                        if (features[10] <= 6.0) {
                                            classes[0] = 128; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 231; 
                                            classes[1] = 1; 
                                            classes[2] = 19; 
                                        }
                                    } else {
                                        if (features[4] <= 2.6515707969665527) {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 19; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 2; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 15.347908973693848) {
                                        if (features[5] <= 6.029303550720215) {
                                            classes[0] = 200; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 53; 
                                            classes[1] = 4; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            } else {
                                if (features[12] <= -6.0) {
                                    if (features[6] <= 12.652167320251465) {
                                        if (features[2] <= -1.559999942779541) {
                                            classes[0] = 42; 
                                            classes[1] = 4; 
                                            classes[2] = 8; 
                                        } else {
                                            classes[0] = 103; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    }
                                } else {
                                    if (features[5] <= 5.435985565185547) {
                                        if (features[5] <= 2.664132595062256) {
                                            classes[0] = 7; 
                                            classes[1] = 4; 
                                            classes[2] = 4; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[11] <= 4.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 10; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[3] <= 5.800000190734863) {
                            if (features[6] <= 8.100424766540527) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        } else {
                            if (features[14] <= 30.0) {
                                if (features[12] <= -6.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            } else {
                                classes[0] = 13; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[1] <= 12.960000038146973) {
                        if (features[10] <= -6.0) {
                            if (features[13] <= -18.0) {
                                if (features[6] <= 5.299037933349609) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 1.9800000190734863) {
                                        if (features[7] <= 7.191157341003418) {
                                            classes[0] = 20; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 33; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[13] <= -54.0) {
                                if (features[4] <= 7.3626909255981445) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= -0.8400000333786011) {
                                        if (features[2] <= 21.600000381469727) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[5] <= 5.970527172088623) {
                                    if (features[14] <= 54.0) {
                                        if (features[6] <= 20.81930923461914) {
                                            classes[0] = 110; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= 11.760000228881836) {
                                        if (features[9] <= -6.0) {
                                            classes[0] = 9; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 354; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[12] <= -24.0) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[7] <= 1.7580392360687256) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[15] <= 88.0) {
                    if (features[13] <= -30.0) {
                        if (features[14] <= 18.0) {
                            if (features[5] <= 12.326120376586914) {
                                if (features[6] <= 6.770084381103516) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[11] <= 75.5) {
                                        if (features[6] <= 8.940465927124023) {
                                            classes[0] = 8; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 20; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= -33.480003356933594) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 8; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[13] <= -60.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 18; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[2] <= 17.040000915527344) {
                            if (features[8] <= 6.0) {
                                if (features[6] <= 3.8808794021606445) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[5] <= 12.851289749145508) {
                                    if (features[1] <= -10.319999694824219) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[14] <= -6.0) {
                                            classes[0] = 152; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 62; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 46.5) {
                                if (features[13] <= -18.0) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 44.94000244140625) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[4] <= 22.315040588378906) {
                                    if (features[1] <= 11.039999961853027) {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 60; 
                                            classes[1] = 20; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 106; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[8] <= 54.0) {
                if (features[3] <= 38.02000045776367) {
                    if (features[4] <= 22.25269317626953) {
                        if (features[1] <= -68.5199966430664) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        } else {
                            if (features[6] <= 12.907882690429688) {
                                classes[0] = 22; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    if (features[1] <= -27.0) {
                        if (features[6] <= 8.881998062133789) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            if (features[6] <= 10.750893592834473) {
                                classes[0] = 7; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[10] <= 60.0) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[2] <= 8.640000343322754) {
                            classes[0] = 0; 
                            classes[1] = 32; 
                            classes[2] = 0; 
                        } else {
                            if (features[7] <= 1.0097483396530151) {
                                classes[0] = 0; 
                                classes[1] = 12; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 58.48999786376953) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[1] <= -25.920000076293945) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 25; 
                } else {
                    if (features[12] <= -42.0) {
                        if (features[1] <= -8.15999984741211) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            }
        }
    } else {
        if (features[13] <= -30.0) {
            if (features[6] <= 15.201580047607422) {
                if (features[3] <= 57.709999084472656) {
                    if (features[4] <= 31.327007293701172) {
                        if (features[6] <= 6.893845558166504) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[6] <= 13.02332878112793) {
                                if (features[5] <= 14.825576782226562) {
                                    if (features[15] <= 36.5) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= 7.079999923706055) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 9.84000015258789) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[5] <= 18.099254608154297) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                } else {
                    if (features[5] <= 14.319246292114258) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 31; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[4] <= 20.004051208496094) {
                    if (features[9] <= 72.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[12] <= -42.0) {
                        if (features[3] <= 14.760000228881836) {
                            if (features[7] <= 1.1212693452835083) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 86; 
                        }
                    } else {
                        if (features[15] <= 25.0) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        }
                    }
                }
            }
        } else {
            if (features[15] <= 65.5) {
                if (features[4] <= 21.616893768310547) {
                    if (features[1] <= 69.83999633789062) {
                        if (features[6] <= 15.651390075683594) {
                            if (features[11] <= 45.5) {
                                if (features[1] <= 3.7199997901916504) {
                                    if (features[10] <= 6.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[3] <= 6.5) {
                                        if (features[5] <= 8.474397659301758) {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 8; 
                                        }
                                    } else {
                                        if (features[2] <= 48.36000061035156) {
                                            classes[0] = 180; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= 18.0) {
                                    if (features[8] <= 30.0) {
                                        if (features[1] <= 15.600000381469727) {
                                            classes[0] = 27; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[8] <= 42.0) {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 9; 
                        }
                    } else {
                        if (features[10] <= 54.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 8; 
                        }
                    }
                } else {
                    if (features[5] <= 11.803156852722168) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[6] <= 11.476298332214355) {
                            if (features[13] <= -6.0) {
                                if (features[12] <= -48.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[4] <= 23.642162322998047) {
                                if (features[7] <= 0.22223356366157532) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 48; 
                            }
                        }
                    }
                }
            } else {
                if (features[11] <= 83.5) {
                    if (features[2] <= -2.640000104904175) {
                        if (features[15] <= 68.5) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= 14.399999618530273) {
                                classes[0] = 13; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[3] <= 76.41999816894531) {
                            if (features[0] <= -9.119999885559082) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 29; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[1] <= 17.040000915527344) {
                                if (features[14] <= -6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 42; 
                    classes[2] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_12(float features[]) {
    int classes[3];
    
    if (features[9] <= 30.0) {
        if (features[3] <= 43.41999816894531) {
            if (features[6] <= 13.141891479492188) {
                if (features[11] <= 3.5) {
                    if (features[10] <= 60.0) {
                        if (features[14] <= 30.0) {
                            if (features[5] <= 5.607486724853516) {
                                if (features[1] <= 1.559999942779541) {
                                    if (features[10] <= 32.0) {
                                        classes[0] = 281; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 0.5) {
                                            classes[0] = 117; 
                                            classes[1] = 1; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 0.9600000381469727) {
                                        if (features[4] <= 0.8485281467437744) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 8; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        }
                                    } else {
                                        if (features[6] <= 8.767345428466797) {
                                            classes[0] = 64; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            } else {
                                if (features[2] <= 0.0) {
                                    if (features[3] <= 0.8300000429153442) {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 19; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 1; 
                                            classes[2] = 34; 
                                        }
                                    } else {
                                        if (features[0] <= -1.9147826433181763) {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        }
                                    }
                                } else {
                                    classes[0] = 68; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[1] <= -0.7199999690055847) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 7; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    if (features[8] <= 78.0) {
                        if (features[8] <= 42.0) {
                            if (features[4] <= 19.39832878112793) {
                                if (features[1] <= 15.0) {
                                    if (features[5] <= 3.144285202026367) {
                                        if (features[11] <= 19.0) {
                                            classes[0] = 17; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= -1.3200000524520874) {
                                            classes[0] = 272; 
                                            classes[1] = 16; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 394; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= 15.720000267028809) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[9] <= -12.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[15] <= 19.0) {
                                if (features[3] <= 15.079999923706055) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                }
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                if (features[2] <= 14.520000457763672) {
                    if (features[11] <= 40.5) {
                        if (features[8] <= 42.0) {
                            if (features[15] <= 21.5) {
                                if (features[0] <= -1.7999999523162842) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[4] <= 2.6673498153686523) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 7; 
                                    }
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 14; 
                        }
                    } else {
                        classes[0] = 4; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[4] <= 17.58756446838379) {
                        classes[0] = 26; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 24.899999618530273) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[1] <= -5.279999732971191) {
                if (features[4] <= 18.532474517822266) {
                    if (features[13] <= -42.0) {
                        if (features[4] <= 10.083244323730469) {
                            if (features[9] <= 6.0) {
                                if (features[11] <= 58.5) {
                                    if (features[5] <= 11.316757202148438) {
                                        if (features[1] <= -48.720001220703125) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= -39.599998474121094) {
                                        if (features[0] <= 1.3199999332427979) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[2] <= 32.400001525878906) {
                                if (features[5] <= 10.69439697265625) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[15] <= 81.0) {
                                        classes[0] = 0; 
                                        classes[1] = 26; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[3] <= 88.25999450683594) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[3] <= 74.44000244140625) {
                            if (features[3] <= 44.02000045776367) {
                                if (features[0] <= 2.4000000953674316) {
                                    if (features[4] <= 9.668745040893555) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[7] <= 1.5337903499603271) {
                                    if (features[1] <= -15.479999542236328) {
                                        classes[0] = 15; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[12] <= -30.0) {
                                            classes[0] = 6; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 35; 
                                            classes[1] = 20; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 22; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[5] <= 7.833463668823242) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[6] <= 7.16103458404541) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 17; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[3] <= 62.69999694824219) {
                        if (features[13] <= -42.0) {
                            if (features[0] <= -0.36000001430511475) {
                                if (features[15] <= 51.5) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 6; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 16; 
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[6] <= 13.297259330749512) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[3] <= 89.49000549316406) {
                    if (features[2] <= 27.0) {
                        if (features[5] <= 13.490348815917969) {
                            if (features[15] <= 65.5) {
                                if (features[0] <= -3.8399999141693115) {
                                    if (features[15] <= 48.5) {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 9.617466926574707) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[5] <= 10.788978576660156) {
                                        if (features[1] <= 12.479999542236328) {
                                            classes[0] = 127; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 63.56999969482422) {
                                            classes[0] = 16; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[13] <= -30.0) {
                                    if (features[3] <= 74.52999877929688) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 8.579986572265625) {
                                        classes[0] = 62; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[5] <= 8.605634689331055) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 68; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[2] <= 28.079999923706055) {
                            if (features[15] <= 73.5) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[4] <= 1.8818141222000122) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            } else {
                                if (features[13] <= -6.0) {
                                    if (features[0] <= 2.5199999809265137) {
                                        if (features[5] <= 10.40929126739502) {
                                            classes[0] = 86; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= 57.5) {
                                            classes[0] = 3; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 18; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                    classes[2] = 0; 
                }
            }
        }
    } else {
        if (features[5] <= 18.201318740844727) {
            if (features[15] <= 43.5) {
                if (features[12] <= -54.0) {
                    if (features[6] <= 13.982137680053711) {
                        if (features[13] <= -6.0) {
                            if (features[11] <= 36.0) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        } else {
                            classes[0] = 5; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 7; 
                    }
                } else {
                    if (features[11] <= 6.5) {
                        if (features[14] <= -6.0) {
                            if (features[5] <= 8.785638809204102) {
                                if (features[13] <= 6.0) {
                                    if (features[4] <= 8.108502388000488) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            } else {
                                if (features[1] <= -3.240000009536743) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[5] <= 12.598437309265137) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 7; 
                                    } else {
                                        if (features[6] <= 8.709981918334961) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[4] <= 17.1610107421875) {
                            if (features[13] <= -30.0) {
                                if (features[4] <= 10.559671401977539) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[0] <= -2.5199999809265137) {
                                    if (features[0] <= -3.8399999141693115) {
                                        if (features[3] <= 27.290000915527344) {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[5] <= 9.338469505310059) {
                                            classes[0] = 1; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 31.899999618530273) {
                                        classes[0] = 137; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 30.5) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[2] <= -27.84000015258789) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 4; 
                            } else {
                                if (features[11] <= 17.5) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    if (features[13] <= 36.0) {
                                        classes[0] = 19; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[3] <= 68.4000015258789) {
                    if (features[1] <= 14.880000114440918) {
                        if (features[5] <= 14.538736343383789) {
                            if (features[6] <= 7.714029312133789) {
                                if (features[2] <= -14.519999504089355) {
                                    if (features[3] <= 55.279998779296875) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[6] <= 6.921077728271484) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[8] <= 54.0) {
                                    if (features[1] <= -2.880000114440918) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 43; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 64.5) {
                                if (features[5] <= 17.562789916992188) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[14] <= -24.0) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[6] <= 11.893102645874023) {
                                if (features[11] <= 63.5) {
                                    classes[0] = 0; 
                                    classes[1] = 25; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.4040610194206238) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        }
                    }
                } else {
                    if (features[14] <= -42.0) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 23.040000915527344) {
                            if (features[3] <= 82.80000305175781) {
                                if (features[4] <= 10.719488143920898) {
                                    if (features[3] <= 74.16000366210938) {
                                        if (features[1] <= 15.960000038146973) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= 13.799999237060547) {
                                        if (features[11] <= 76.5) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 20; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 52; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[4] <= 18.67516326904297) {
                if (features[3] <= 57.709999084472656) {
                    if (features[2] <= 32.040000915527344) {
                        classes[0] = 11; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 14; 
                    classes[2] = 0; 
                }
            } else {
                if (features[6] <= 12.546098709106445) {
                    if (features[4] <= 24.092884063720703) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[7] <= 0.6709901094436646) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    if (features[12] <= -42.0) {
                        if (features[3] <= 14.300000190734863) {
                            if (features[3] <= 13.270000457763672) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 156; 
                        }
                    } else {
                        if (features[3] <= 24.520000457763672) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 6; 
                        }
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_13(float features[]) {
    int classes[3];
    
    if (features[8] <= 54.0) {
        if (features[15] <= 40.5) {
            if (features[9] <= 90.0) {
                if (features[14] <= -54.0) {
                    if (features[11] <= 16.5) {
                        if (features[12] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 10; 
                        } else {
                            if (features[8] <= 18.0) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        }
                    } else {
                        if (features[6] <= 17.75037956237793) {
                            classes[0] = 8; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    if (features[5] <= 16.82848358154297) {
                        if (features[4] <= 16.69851303100586) {
                            if (features[2] <= 0.11999999731779099) {
                                if (features[10] <= -6.0) {
                                    if (features[3] <= 40.349998474121094) {
                                        if (features[6] <= 3.882356882095337) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 223; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= -42.0) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= -6.599999904632568) {
                                        if (features[5] <= 14.018025398254395) {
                                            classes[0] = 152; 
                                            classes[1] = 8; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[2] <= -4.199999809265137) {
                                            classes[0] = 18; 
                                            classes[1] = 8; 
                                            classes[2] = 17; 
                                        } else {
                                            classes[0] = 105; 
                                            classes[1] = 5; 
                                            classes[2] = 21; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= 54.0) {
                                    if (features[6] <= 18.60295295715332) {
                                        if (features[12] <= -4.0) {
                                            classes[0] = 892; 
                                            classes[1] = 12; 
                                            classes[2] = 12; 
                                        } else {
                                            classes[0] = 95; 
                                            classes[1] = 7; 
                                            classes[2] = 4; 
                                        }
                                    } else {
                                        if (features[5] <= 6.240761756896973) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= 79.19999694824219) {
                                        if (features[9] <= 6.0) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[11] <= 20.5) {
                                if (features[2] <= 6.119999885559082) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                } else {
                                    if (features[12] <= -42.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[6] <= 14.522318840026855) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[10] <= 72.0) {
                                    classes[0] = 25; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= -3.4800000190734863) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 5.969918251037598) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= 2.5200002193450928) {
                                classes[0] = 8; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[4] <= 12.840293884277344) {
                                    if (features[8] <= 18.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[4] <= 13.958305358886719) {
                    if (features[10] <= 42.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 12; 
                }
            }
        } else {
            if (features[5] <= 12.214810371398926) {
                if (features[1] <= 14.280000686645508) {
                    if (features[3] <= 89.44999694824219) {
                        if (features[9] <= 18.0) {
                            if (features[2] <= 32.87999725341797) {
                                if (features[5] <= 10.573125839233398) {
                                    if (features[7] <= 0.1696850061416626) {
                                        if (features[4] <= 7.5367021560668945) {
                                            classes[0] = 19; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 6.0) {
                                            classes[0] = 91; 
                                            classes[1] = 13; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 8.571393966674805) {
                                        if (features[8] <= 18.0) {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= 0.5999999642372131) {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= -28.920000076293945) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[8] <= 18.0) {
                                        if (features[11] <= 55.5) {
                                            classes[0] = 9; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.7103567123413086) {
                                            classes[0] = 25; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 48; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 54.7599983215332) {
                                if (features[3] <= 45.220001220703125) {
                                    classes[0] = 31; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= 5.880000114440918) {
                                        if (features[10] <= 30.0) {
                                            classes[0] = 16; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= 21.84000015258789) {
                                            classes[0] = 21; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[3] <= 63.84000015258789) {
                                    classes[0] = 65; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.21892330050468445) {
                                        if (features[2] <= 36.84000015258789) {
                                            classes[0] = 55; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 9.360000610351562) {
                                            classes[0] = 67; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 7; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[2] <= -17.15999984741211) {
                        classes[0] = 7; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[4] <= 22.70869255065918) {
                            if (features[3] <= 44.59000015258789) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[7] <= 0.4177400469779968) {
                                    if (features[5] <= 9.334573745727539) {
                                        if (features[6] <= 8.410078048706055) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= 81.0) {
                                            classes[0] = 0; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 31; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    }
                }
            } else {
                if (features[4] <= 20.24419593811035) {
                    if (features[14] <= -42.0) {
                        if (features[2] <= -25.079999923706055) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[6] <= 13.496542930603027) {
                            if (features[2] <= -21.119998931884766) {
                                if (features[11] <= 57.5) {
                                    if (features[2] <= -22.31999969482422) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 6.584333419799805) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[9] <= 42.0) {
                                    if (features[5] <= 14.225423812866211) {
                                        if (features[3] <= 80.64999389648438) {
                                            classes[0] = 15; 
                                            classes[1] = 32; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 14.344189643859863) {
                                            classes[0] = 0; 
                                            classes[1] = 47; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 44; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[13] <= -36.0) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            } else {
                                if (features[5] <= 16.70343017578125) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[3] <= 62.5) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 10; 
                    } else {
                        if (features[1] <= 9.119999885559082) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[6] <= 12.421720504760742) {
            if (features[3] <= 15.569999694824219) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 6; 
            } else {
                if (features[4] <= 17.091772079467773) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    if (features[5] <= 15.36316967010498) {
                        if (features[0] <= -2.760000228881836) {
                            if (features[15] <= 43.5) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 16; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[10] <= 30.0) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[5] <= 17.577011108398438) {
                if (features[13] <= -18.0) {
                    if (features[14] <= -18.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        if (features[1] <= -54.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 7; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[5] <= 17.452735900878906) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 8; 
                    } else {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[13] <= -42.0) {
                    if (features[3] <= 15.969999313354492) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[9] <= 30.0) {
                            if (features[2] <= 12.84000015258789) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 20; 
                            } else {
                                if (features[2] <= 13.440000534057617) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= -7.079999923706055) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 7; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 67; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 71; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_14(float features[]) {
    int classes[3];
    
    if (features[6] <= 15.50538444519043) {
        if (features[15] <= 44.5) {
            if (features[4] <= 23.293487548828125) {
                if (features[5] <= 13.481947898864746) {
                    if (features[9] <= 90.0) {
                        if (features[7] <= 1.724789023399353) {
                            if (features[2] <= 0.6000000238418579) {
                                if (features[2] <= -11.880000114440918) {
                                    if (features[4] <= 2.9190456867218018) {
                                        classes[0] = 142; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 0.3704347610473633) {
                                            classes[0] = 45; 
                                            classes[1] = 8; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 95; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= -3.239999771118164) {
                                        if (features[1] <= -4.440000057220459) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 15; 
                                        } else {
                                            classes[0] = 83; 
                                            classes[1] = 8; 
                                            classes[2] = 12; 
                                        }
                                    } else {
                                        if (features[6] <= 2.6918411254882812) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 111; 
                                            classes[1] = 1; 
                                            classes[2] = 8; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= 0.35999998450279236) {
                                    if (features[1] <= -0.11999999731779099) {
                                        if (features[3] <= 42.22999954223633) {
                                            classes[0] = 340; 
                                            classes[1] = 5; 
                                            classes[2] = 11; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= 2.5) {
                                            classes[0] = 31; 
                                            classes[1] = 7; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 45.54999923706055) {
                                        if (features[2] <= 41.79428482055664) {
                                            classes[0] = 514; 
                                            classes[1] = 4; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 29; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 38.68000030517578) {
                                if (features[4] <= 12.0292329788208) {
                                    if (features[15] <= 9.5) {
                                        if (features[0] <= -4.920000076293945) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 24; 
                                            classes[1] = 3; 
                                            classes[2] = 4; 
                                        }
                                    } else {
                                        if (features[14] <= -18.0) {
                                            classes[0] = 44; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 48; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 7.5883588790893555) {
                                        if (features[2] <= -28.799999237060547) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 54.0) {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                }
                            } else {
                                if (features[2] <= 37.31999969482422) {
                                    if (features[7] <= 2.009768009185791) {
                                        if (features[5] <= 6.915707588195801) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[11] <= 43.5) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[5] <= 8.218036651611328) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[7] <= 0.8720093369483948) {
                        if (features[14] <= -54.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[3] <= 24.670000076293945) {
                                if (features[2] <= -8.280000686645508) {
                                    if (features[1] <= 3.359999895095825) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    classes[0] = 20; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[0] <= -1.0799999237060547) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[13] <= -6.0) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 37.19999694824219) {
                            if (features[11] <= 20.5) {
                                if (features[12] <= -18.0) {
                                    if (features[9] <= 30.0) {
                                        if (features[7] <= 2.5136237144470215) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[12] <= -30.0) {
                                    if (features[1] <= -39.23999786376953) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[14] <= 18.0) {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[5] <= 12.796772003173828) {
                    if (features[1] <= -46.91999816894531) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[10] <= 36.0) {
                            classes[0] = 9; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[6] <= 12.326333999633789) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[13] <= -12.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[0] <= 5.760000228881836) {
                        if (features[3] <= 42.970001220703125) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 22; 
                        } else {
                            if (features[5] <= 28.063358306884766) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        }
                    } else {
                        if (features[8] <= 90.0) {
                            if (features[6] <= 14.93120002746582) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 7; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[1] <= 15.239999771118164) {
                if (features[13] <= -30.0) {
                    if (features[6] <= 6.816184043884277) {
                        if (features[3] <= 57.040000915527344) {
                            classes[0] = 16; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[4] <= 9.306403160095215) {
                                classes[0] = 6; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[4] <= 13.529584884643555) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[9] <= 18.0) {
                            if (features[3] <= 50.619998931884766) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[6] <= 10.417034149169922) {
                                    if (features[8] <= 42.0) {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 9; 
                                            classes[1] = 24; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.36723244190216064) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 16.053117752075195) {
                                        classes[0] = 17; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[8] <= 42.0) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[12] <= -42.0) {
                                if (features[10] <= 42.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 5; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[15] <= 64.0) {
                                    if (features[8] <= 30.0) {
                                        if (features[4] <= 10.561342239379883) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 22; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[15] <= 85.5) {
                        if (features[11] <= 46.5) {
                            if (features[14] <= 6.0) {
                                if (features[5] <= 8.554092407226562) {
                                    if (features[3] <= 45.209999084472656) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[10] <= 24.0) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[5] <= 6.594747543334961) {
                                    classes[0] = 0; 
                                    classes[1] = 9; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[6] <= 8.18021011352539) {
                                if (features[6] <= 6.995026588439941) {
                                    if (features[2] <= 50.15999984741211) {
                                        if (features[15] <= 70.0) {
                                            classes[0] = 71; 
                                            classes[1] = 20; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 25; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 14.282041549682617) {
                                        if (features[15] <= 62.5) {
                                            classes[0] = 16; 
                                            classes[1] = 18; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 30; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[10] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[4] <= 21.911357879638672) {
                                    if (features[9] <= 30.0) {
                                        if (features[3] <= 55.099998474121094) {
                                            classes[0] = 37; 
                                            classes[1] = 18; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 159; 
                                            classes[1] = 15; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[6] <= 8.622693061828613) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 52; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 11.253875732421875) {
                                        if (features[7] <= 0.36616086959838867) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[4] <= 18.901695251464844) {
                            classes[0] = 0; 
                            classes[1] = 23; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[12] <= -54.0) {
                    if (features[0] <= -4.440000057220459) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                } else {
                    if (features[2] <= -18.0) {
                        if (features[13] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[0] <= -11.039999961853027) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[5] <= 9.334573745727539) {
                                if (features[6] <= 9.82490348815918) {
                                    classes[0] = 0; 
                                    classes[1] = 16; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 72; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[5] <= 17.833423614501953) {
            if (features[6] <= 17.27349853515625) {
                if (features[9] <= 114.0) {
                    if (features[15] <= 37.0) {
                        classes[0] = 15; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[12] <= -48.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[13] <= -42.0) {
                    if (features[11] <= 58.5) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[1] <= -3.5999999046325684) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[4] <= 31.45368194580078) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 11; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 12.5) {
                classes[0] = 1; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                if (features[11] <= 15.5) {
                    if (features[12] <= -60.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    if (features[0] <= -9.479999542236328) {
                        if (features[2] <= 3.8399999141693115) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[3] <= 51.959999084472656) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 129; 
                        } else {
                            if (features[8] <= 78.0) {
                                if (features[6] <= 18.45777130126953) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 11; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 23; 
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
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_15(float features[]) {
    int classes[3];
    
    if (features[6] <= 15.399969100952148) {
        if (features[3] <= 44.94000244140625) {
            if (features[13] <= -90.0) {
                if (features[4] <= 17.966564178466797) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                }
            } else {
                if (features[3] <= 39.94000244140625) {
                    if (features[12] <= -54.0) {
                        if (features[2] <= 5.039999961853027) {
                            if (features[1] <= 34.560001373291016) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 10; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[1] <= 63.47999572753906) {
                                if (features[11] <= 37.0) {
                                    classes[0] = 13; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 7; 
                            }
                        }
                    } else {
                        if (features[4] <= 16.752473831176758) {
                            if (features[3] <= 11.729999542236328) {
                                if (features[0] <= 4.079999923706055) {
                                    if (features[5] <= 8.253456115722656) {
                                        if (features[3] <= 5.579999923706055) {
                                            classes[0] = 697; 
                                            classes[1] = 6; 
                                            classes[2] = 38; 
                                        } else {
                                            classes[0] = 84; 
                                            classes[1] = 9; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[2] <= -1.0799999237060547) {
                                            classes[0] = 8; 
                                            classes[1] = 4; 
                                            classes[2] = 9; 
                                        } else {
                                            classes[0] = 33; 
                                            classes[1] = 0; 
                                            classes[2] = 4; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                }
                            } else {
                                if (features[7] <= 1.4245953559875488) {
                                    if (features[3] <= 22.580001831054688) {
                                        if (features[0] <= 5.760000228881836) {
                                            classes[0] = 218; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[5] <= 15.04210090637207) {
                                            classes[0] = 273; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 11.90999984741211) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[5] <= 8.160381317138672) {
                                            classes[0] = 96; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 68; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 20.369998931884766) {
                                if (features[6] <= 9.474127769470215) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.1752549111843109) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 13; 
                                    }
                                }
                            } else {
                                if (features[1] <= 28.200000762939453) {
                                    if (features[15] <= 38.5) {
                                        classes[0] = 29; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[7] <= 2.1641221046447754) {
                                        if (features[3] <= 25.09000015258789) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (features[7] <= 0.8566175699234009) {
                        if (features[5] <= 10.719358444213867) {
                            classes[0] = 46; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 16.68000030517578) {
                                if (features[14] <= -18.0) {
                                    if (features[11] <= 43.5) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[0] <= -0.35999998450279236) {
                            if (features[0] <= -1.559999942779541) {
                                if (features[9] <= 30.0) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[7] <= 1.0821908712387085) {
                                if (features[15] <= 41.5) {
                                    classes[0] = 0; 
                                    classes[1] = 7; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[7] <= 1.8994603157043457) {
                                    if (features[14] <= 30.0) {
                                        if (features[1] <= 13.079999923706055) {
                                            classes[0] = 16; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 6.208780288696289) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 18; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[1] <= 14.520000457763672) {
                if (features[5] <= 12.640459060668945) {
                    if (features[0] <= 0.8473469018936157) {
                        if (features[4] <= 13.889945983886719) {
                            if (features[13] <= -30.0) {
                                if (features[5] <= 10.116449356079102) {
                                    if (features[3] <= 76.50999450683594) {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[11] <= 71.5) {
                                        if (features[5] <= 11.479619026184082) {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 80.3699951171875) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[2] <= -14.279999732971191) {
                                    if (features[0] <= 0.11999999731779099) {
                                        if (features[7] <= 0.7991591691970825) {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[11] <= 46.5) {
                                        if (features[1] <= 5.760000228881836) {
                                            classes[0] = 1; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 87.1500015258789) {
                                            classes[0] = 155; 
                                            classes[1] = 31; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[5] <= 8.769670486450195) {
                                if (features[11] <= 78.5) {
                                    if (features[13] <= -18.0) {
                                        if (features[4] <= 17.23154067993164) {
                                            classes[0] = 6; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[11] <= 48.5) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[2] <= 7.079999923706055) {
                                    if (features[11] <= 61.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[12] <= -42.0) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 50.400001525878906) {
                                        if (features[14] <= 18.0) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[9] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 15; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[3] <= 88.3800048828125) {
                            if (features[4] <= 13.847566604614258) {
                                if (features[2] <= 22.68000030517578) {
                                    if (features[1] <= 11.520000457763672) {
                                        if (features[11] <= 46.5) {
                                            classes[0] = 5; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 112; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[6] <= 7.570651054382324) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[0] <= 1.0800000429153442) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 8.946478843688965) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 47; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[7] <= 0.18516401946544647) {
                                    if (features[15] <= 52.5) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[15] <= 72.5) {
                                        if (features[11] <= 47.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 31; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= 4.920000076293945) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[1] <= 0.7199999690055847) {
                        if (features[1] <= -41.160003662109375) {
                            if (features[14] <= -18.0) {
                                if (features[15] <= 62.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[0] <= 8.760000228881836) {
                                if (features[12] <= -78.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    if (features[4] <= 23.282421112060547) {
                                        if (features[11] <= 66.0) {
                                            classes[0] = 6; 
                                            classes[1] = 26; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 44; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[15] <= 84.0) {
                            if (features[2] <= -2.0399999618530273) {
                                if (features[11] <= 52.0) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= -1.9200000762939453) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 79.0) {
                                            classes[0] = 18; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= 10.800000190734863) {
                                    if (features[12] <= -54.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 76.5) {
                                            classes[0] = 0; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 12; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[2] <= -18.959999084472656) {
                    if (features[13] <= -18.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[12] <= -54.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        if (features[9] <= 42.0) {
                            if (features[3] <= 72.2300033569336) {
                                classes[0] = 0; 
                                classes[1] = 16; 
                                classes[2] = 0; 
                            } else {
                                if (features[1] <= 15.720000267028809) {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 87.55000305175781) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[13] <= 6.0) {
                                classes[0] = 0; 
                                classes[1] = 38; 
                                classes[2] = 0; 
                            } else {
                                if (features[1] <= 28.439998626708984) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 34; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (features[12] <= -42.0) {
            if (features[9] <= 30.0) {
                if (features[1] <= -10.079999923706055) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 17; 
                } else {
                    if (features[0] <= 0.7200000286102295) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 5; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[11] <= 17.5) {
                    if (features[10] <= 36.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 139; 
                }
            }
        } else {
            if (features[4] <= 14.343870162963867) {
                if (features[13] <= -42.0) {
                    if (features[6] <= 17.244918823242188) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[10] <= 42.0) {
                        classes[0] = 16; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[2] <= 13.920000076293945) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 6; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[15] <= 14.0) {
                    classes[0] = 2; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 12; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_16(float features[]) {
    int classes[3];
    
    if (features[5] <= 14.36831283569336) {
        if (features[5] <= 10.739968299865723) {
            if (features[15] <= 44.5) {
                if (features[15] <= 7.5) {
                    if (features[3] <= 7.670000076293945) {
                        if (features[0] <= 4.079999923706055) {
                            if (features[5] <= 5.807514667510986) {
                                if (features[2] <= 39.1542854309082) {
                                    if (features[1] <= -0.11999999731779099) {
                                        if (features[6] <= 5.970527172088623) {
                                            classes[0] = 256; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 40; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[11] <= 8.5) {
                                            classes[0] = 296; 
                                            classes[1] = 8; 
                                            classes[2] = 14; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[9] <= 6.0) {
                                        if (features[3] <= 3.8500001430511475) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[10] <= 18.0) {
                                    if (features[1] <= 4.199999809265137) {
                                        if (features[11] <= 0.5) {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                            classes[2] = 11; 
                                        } else {
                                            classes[0] = 36; 
                                            classes[1] = 4; 
                                            classes[2] = 3; 
                                        }
                                    } else {
                                        if (features[0] <= -0.48000001907348633) {
                                            classes[0] = 13; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 12; 
                                        }
                                    }
                                } else {
                                    if (features[5] <= 8.762677192687988) {
                                        if (features[11] <= 0.5) {
                                            classes[0] = 9; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 66; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[8] <= 18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[10] <= 66.0) {
                            if (features[2] <= 0.0) {
                                if (features[1] <= -1.3199999332427979) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[13] <= -6.0) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[3] <= 11.360000610351562) {
                                    if (features[6] <= 10.493452072143555) {
                                        classes[0] = 11; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[4] <= 3.0836727619171143) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[0] <= -3.239999771118164) {
                        if (features[7] <= 2.0170674324035645) {
                            if (features[5] <= 7.939453125) {
                                classes[0] = 57; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[6] <= 5.368997097015381) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= -3.4800000190734863) {
                                        if (features[15] <= 27.0) {
                                            classes[0] = 33; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 7.559999942779541) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[6] <= 7.744408130645752) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[13] <= -30.0) {
                            if (features[4] <= 4.12445068359375) {
                                if (features[4] <= 3.136444091796875) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[15] <= 9.5) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[14] <= 54.0) {
                                        if (features[4] <= 19.030364990234375) {
                                            classes[0] = 82; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[11] <= 19.0) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[6] <= 24.12889862060547) {
                                if (features[0] <= 6.239999771118164) {
                                    if (features[0] <= 0.8400000333786011) {
                                        if (features[1] <= 14.639999389648438) {
                                            classes[0] = 264; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 31; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 3.462559700012207) {
                                            classes[0] = 2; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 223; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= 18.0) {
                                        if (features[0] <= 8.399999618530273) {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[0] <= 3.240000009536743) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[4] <= 5.607486724853516) {
                    if (features[15] <= 86.5) {
                        if (features[4] <= 1.8818141222000122) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 42; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[13] <= -6.0) {
                        if (features[0] <= 2.0399999618530273) {
                            if (features[3] <= 55.48999786376953) {
                                if (features[7] <= 1.1518006324768066) {
                                    if (features[11] <= 51.0) {
                                        if (features[3] <= 46.959999084472656) {
                                            classes[0] = 2; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 2.0399999618530273) {
                                            classes[0] = 0; 
                                            classes[1] = 22; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 8.14666748046875) {
                                        if (features[7] <= 1.694563865661621) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[1] <= -10.440000534057617) {
                                    if (features[4] <= 6.642403602600098) {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[14] <= -24.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[15] <= 88.0) {
                                        if (features[3] <= 61.720001220703125) {
                                            classes[0] = 31; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 104; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 45.45000076293945) {
                                if (features[9] <= 18.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[5] <= 7.53495979309082) {
                                    if (features[5] <= 7.472361087799072) {
                                        if (features[15] <= 57.0) {
                                            classes[0] = 35; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 20; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[2] <= 34.79999923706055) {
                                        classes[0] = 85; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[5] <= 9.15223217010498) {
                                            classes[0] = 14; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[9] <= 30.0) {
                            if (features[2] <= 23.040000915527344) {
                                if (features[8] <= 18.0) {
                                    if (features[1] <= 11.880000114440918) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[6] <= 9.883773803710938) {
                                    if (features[4] <= 11.10499382019043) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[6] <= 10.645618438720703) {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[6] <= 7.831928253173828) {
                                if (features[5] <= 9.650262832641602) {
                                    if (features[14] <= 18.0) {
                                        classes[0] = 7; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 5; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[8] <= 30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 26; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 57.41999816894531) {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[11] <= 69.5) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[3] <= 79.52000427246094) {
                if (features[15] <= 41.0) {
                    if (features[12] <= -54.0) {
                        if (features[8] <= 78.0) {
                            if (features[13] <= -18.0) {
                                if (features[6] <= 14.183804512023926) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 6; 
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[1] <= 69.83999633789062) {
                            if (features[3] <= 6.190000057220459) {
                                if (features[1] <= -9.600000381469727) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.4535573720932007) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[3] <= 40.55999755859375) {
                                    if (features[6] <= 12.636958122253418) {
                                        if (features[0] <= -4.560000419616699) {
                                            classes[0] = 6; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 85; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[13] <= -72.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -3.9600000381469727) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    if (features[2] <= 4.440000057220459) {
                        if (features[4] <= 6.211671352386475) {
                            classes[0] = 0; 
                            classes[1] = 5; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= -36.0) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                if (features[9] <= 18.0) {
                                    if (features[2] <= -19.079999923706055) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[0] <= 0.12000000476837158) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[6] <= 7.714138984680176) {
                                        if (features[6] <= 7.003325939178467) {
                                            classes[0] = 9; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[3] <= 51.779998779296875) {
                                            classes[0] = 7; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 33; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[1] <= -3.0) {
                            if (features[7] <= 1.6602013111114502) {
                                if (features[3] <= 66.435302734375) {
                                    if (features[3] <= 64.70999908447266) {
                                        if (features[2] <= 32.040000915527344) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 8; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[9] <= 30.0) {
                                if (features[13] <= -30.0) {
                                    if (features[1] <= 0.35999998450279236) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 12; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[13] <= -6.0) {
                                    if (features[1] <= 5.400000095367432) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[10] <= 60.0) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[15] <= 88.5) {
                    if (features[8] <= 42.0) {
                        if (features[4] <= 10.307641983032227) {
                            if (features[0] <= 2.759999990463257) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[9] <= 30.0) {
                            classes[0] = 4; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 38; 
                    classes[2] = 0; 
                }
            }
        }
    } else {
        if (features[4] <= 16.561277389526367) {
            if (features[3] <= 41.68000030517578) {
                if (features[5] <= 14.579179763793945) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                } else {
                    if (features[3] <= 17.850000381469727) {
                        if (features[9] <= 42.0) {
                            classes[0] = 6; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        }
                    } else {
                        if (features[15] <= 25.5) {
                            classes[0] = 19; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[15] <= 26.5) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 28.560001373291016) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 11; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[4] <= 14.440427780151367) {
                    if (features[14] <= -18.0) {
                        classes[0] = 0; 
                        classes[1] = 45; 
                        classes[2] = 0; 
                    } else {
                        if (features[13] <= -30.0) {
                            if (features[7] <= 1.474785327911377) {
                                if (features[2] <= 4.199999809265137) {
                                    if (features[11] <= 79.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[9] <= 0.0) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[11] <= 61.5) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 9; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[6] <= 12.542675971984863) {
                if (features[0] <= 6.0) {
                    if (features[8] <= 42.0) {
                        if (features[7] <= 1.3824083805084229) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        classes[0] = 9; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                if (features[11] <= 62.5) {
                    if (features[5] <= 18.915775299072266) {
                        if (features[9] <= 54.0) {
                            if (features[14] <= -30.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 6; 
                            } else {
                                if (features[10] <= 60.0) {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            if (features[6] <= 16.948631286621094) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 13; 
                            } else {
                                if (features[5] <= 17.316349029541016) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[0] <= -1.7999999523162842) {
                            if (features[2] <= 21.959999084472656) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 35; 
                            } else {
                                if (features[3] <= 29.450000762939453) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 7; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 148; 
                        }
                    }
                } else {
                    classes[0] = 3; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_17(float features[]) {
    int classes[3];
    
    if (features[4] <= 25.583078384399414) {
        if (features[11] <= 44.5) {
            if (features[0] <= 4.680000305175781) {
                if (features[4] <= 16.752473831176758) {
                    if (features[15] <= 7.5) {
                        if (features[5] <= 5.72939395904541) {
                            if (features[10] <= 66.0) {
                                if (features[2] <= 39.599998474121094) {
                                    if (features[1] <= -0.11999999731779099) {
                                        classes[0] = 270; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 3.1239430904388428) {
                                            classes[0] = 175; 
                                            classes[1] = 5; 
                                            classes[2] = 10; 
                                        } else {
                                            classes[0] = 131; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 6.269999980926514) {
                                        if (features[15] <= 1.5) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[15] <= 6.5) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                }
                            } else {
                                if (features[14] <= 30.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[2] <= -0.35999998450279236) {
                                if (features[1] <= 4.199999809265137) {
                                    if (features[11] <= 0.5) {
                                        if (features[1] <= -8.039999961853027) {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 10; 
                                            classes[1] = 0; 
                                            classes[2] = 21; 
                                        }
                                    } else {
                                        if (features[0] <= -1.7947826385498047) {
                                            classes[0] = 2; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 35; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    if (features[7] <= 0.5010133981704712) {
                                        if (features[0] <= -3.6000001430511475) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 17; 
                                        }
                                    } else {
                                        if (features[4] <= 8.459447860717773) {
                                            classes[0] = 1; 
                                            classes[1] = 3; 
                                            classes[2] = 5; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= -7.800000190734863) {
                                    if (features[11] <= 9.5) {
                                        if (features[3] <= 4.159999847412109) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 8; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                } else {
                                    if (features[1] <= 6.239999771118164) {
                                        classes[0] = 82; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[11] <= 0.5) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 27; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[14] <= 54.0) {
                            if (features[10] <= -6.0) {
                                if (features[3] <= 38.349998474121094) {
                                    if (features[7] <= 7.650312900543213) {
                                        if (features[13] <= -30.0) {
                                            classes[0] = 12; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 58; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[8] <= 18.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 5.759999752044678) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 24.12889862060547) {
                                    if (features[5] <= 15.917577743530273) {
                                        if (features[7] <= 2.3215389251708984) {
                                            classes[0] = 623; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 17; 
                                            classes[1] = 6; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[7] <= 0.6095870733261108) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            if (features[12] <= -18.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                if (features[3] <= 26.220001220703125) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[5] <= 12.836982727050781) {
                        if (features[15] <= 20.0) {
                            if (features[12] <= -60.0) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[11] <= 12.5) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            }
                        } else {
                            classes[0] = 19; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[10] <= 30.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 17; 
                        } else {
                            if (features[5] <= 17.262723922729492) {
                                if (features[13] <= 6.0) {
                                    if (features[7] <= 1.2163465023040771) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            } else {
                                if (features[3] <= 13.130001068115234) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[6] <= 11.210411071777344) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 7; 
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[5] <= 17.513961791992188) {
                    if (features[0] <= 23.639999389648438) {
                        if (features[2] <= 69.36000061035156) {
                            if (features[15] <= 11.5) {
                                if (features[4] <= 13.039018630981445) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[12] <= -18.0) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[6] <= 5.596926212310791) {
                                    if (features[3] <= 20.139999389648438) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 41; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 16.5) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                if (features[5] <= 11.699291229248047) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    if (features[15] <= 9.5) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 11; 
                    }
                }
            }
        } else {
            if (features[5] <= 13.008234977722168) {
                if (features[1] <= 15.239999771118164) {
                    if (features[15] <= 88.5) {
                        if (features[13] <= -42.0) {
                            if (features[2] <= 7.768162727355957) {
                                if (features[2] <= -6.720000267028809) {
                                    if (features[3] <= 73.38999938964844) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[3] <= 58.62000274658203) {
                                    if (features[4] <= 8.934837341308594) {
                                        classes[0] = 0; 
                                        classes[1] = 5; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[2] <= 17.280000686645508) {
                                if (features[13] <= -30.0) {
                                    if (features[14] <= -18.0) {
                                        if (features[7] <= 0.3099697530269623) {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.46706104278564453) {
                                            classes[0] = 6; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[4] <= 15.14404296875) {
                                        if (features[0] <= -3.9600000381469727) {
                                            classes[0] = 12; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 224; 
                                            classes[1] = 18; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= 0.23999999463558197) {
                                            classes[0] = 9; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 14; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[0] <= 0.8400000333786011) {
                                    if (features[11] <= 46.5) {
                                        if (features[1] <= 3.8399999141693115) {
                                            classes[0] = 1; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[9] <= 6.0) {
                                            classes[0] = 3; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 95; 
                                            classes[1] = 30; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[5] <= 12.686765670776367) {
                                        if (features[6] <= 3.9848732948303223) {
                                            classes[0] = 3; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 132; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 11; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[5] <= 9.39698600769043) {
                        if (features[5] <= 9.282451629638672) {
                            if (features[2] <= -14.879999160766602) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[9] <= 42.0) {
                                    if (features[15] <= 68.0) {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 5; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 12; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 41; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[6] <= 13.212202072143555) {
                    if (features[7] <= 2.4958229064941406) {
                        if (features[14] <= -42.0) {
                            if (features[2] <= -27.360000610351562) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[5] <= 13.465599060058594) {
                                if (features[15] <= 75.5) {
                                    if (features[12] <= -30.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 8; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 12.20254898071289) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[9] <= -6.0) {
                                    if (features[0] <= 1.3199999332427979) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 103; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[15] <= 55.5) {
                        if (features[2] <= 4.920000076293945) {
                            if (features[11] <= 61.5) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 16; 
                        }
                    } else {
                        if (features[10] <= 42.0) {
                            if (features[1] <= 12.600000381469727) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        }
    } else {
        if (features[8] <= 42.0) {
            classes[0] = 2; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[6] <= 11.555704116821289) {
                if (features[15] <= 22.5) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[13] <= -18.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 6; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[4] <= 62.80200958251953) {
                    if (features[6] <= 14.128922462463379) {
                        if (features[4] <= 26.57414436340332) {
                            if (features[2] <= 13.319999694824219) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            if (features[5] <= 12.762218475341797) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 10; 
                            }
                        }
                    } else {
                        if (features[5] <= 14.37149429321289) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[7] <= 0.1414213627576828) {
                                if (features[9] <= 30.0) {
                                    if (features[3] <= 51.0) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 4; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 21; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 156; 
                            }
                        }
                    }
                } else {
                    if (features[15] <= 27.5) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_18(float features[]) {
    int classes[3];
    
    if (features[9] <= 42.0) {
        if (features[3] <= 42.02000045776367) {
            if (features[5] <= 13.877867698669434) {
                if (features[0] <= 23.639999389648438) {
                    if (features[3] <= 0.8100000023841858) {
                        if (features[12] <= -18.0) {
                            if (features[9] <= 6.0) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 6; 
                            }
                        } else {
                            if (features[4] <= 6.471037864685059) {
                                if (features[14] <= -18.0) {
                                    if (features[13] <= -6.0) {
                                        if (features[6] <= 6.462021350860596) {
                                            classes[0] = 129; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[1] <= 4.079999923706055) {
                                            classes[0] = 13; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        }
                                    }
                                } else {
                                    if (features[2] <= -3.8400001525878906) {
                                        if (features[13] <= -6.0) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 8; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[2] <= -0.11999999731779099) {
                                            classes[0] = 32; 
                                            classes[1] = 1; 
                                            classes[2] = 9; 
                                        } else {
                                            classes[0] = 258; 
                                            classes[1] = 1; 
                                            classes[2] = 15; 
                                        }
                                    }
                                }
                            } else {
                                if (features[6] <= 5.284400939941406) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            }
                        }
                    } else {
                        if (features[2] <= 41.79428482055664) {
                            if (features[14] <= -6.0) {
                                if (features[7] <= 7.650312900543213) {
                                    if (features[11] <= 6.5) {
                                        if (features[5] <= 7.675654411315918) {
                                            classes[0] = 69; 
                                            classes[1] = 2; 
                                            classes[2] = 3; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 9; 
                                            classes[2] = 10; 
                                        }
                                    } else {
                                        if (features[6] <= 24.12889862060547) {
                                            classes[0] = 366; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[13] <= -54.0) {
                                    if (features[15] <= 28.5) {
                                        classes[0] = 12; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 7.011756420135498) {
                                        if (features[15] <= 3.5) {
                                            classes[0] = 107; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 167; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[11] <= 41.5) {
                                            classes[0] = 155; 
                                            classes[1] = 1; 
                                            classes[2] = 2; 
                                        } else {
                                            classes[0] = 9; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[15] <= 3.5) {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            } else {
                                if (features[4] <= 3.5153307914733887) {
                                    if (features[1] <= -1.3200000524520874) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= -11.145000457763672) {
                                        if (features[6] <= 5.749163627624512) {
                                            classes[0] = 2; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 1; 
                                            classes[2] = 3; 
                                        }
                                    } else {
                                        if (features[1] <= 11.520000457763672) {
                                            classes[0] = 68; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                if (features[4] <= 17.073223114013672) {
                    if (features[6] <= 7.371040344238281) {
                        if (features[12] <= -18.0) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 18; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[14] <= -30.0) {
                        if (features[4] <= 21.34662437438965) {
                            if (features[4] <= 19.06804084777832) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 21; 
                        }
                    } else {
                        if (features[10] <= 42.0) {
                            if (features[0] <= 4.920000076293945) {
                                classes[0] = 10; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            if (features[1] <= -11.520000457763672) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 11; 
                            } else {
                                if (features[5] <= 14.94476318359375) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                } else {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[11] <= 89.5) {
                if (features[5] <= 12.709981918334961) {
                    if (features[1] <= 14.399999618530273) {
                        if (features[13] <= -42.0) {
                            if (features[3] <= 43.720001220703125) {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[1] <= -24.240001678466797) {
                                    if (features[12] <= -6.0) {
                                        if (features[15] <= 73.0) {
                                            classes[0] = 0; 
                                            classes[1] = 17; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[5] <= 4.551137924194336) {
                                classes[0] = 0; 
                                classes[1] = 5; 
                                classes[2] = 0; 
                            } else {
                                if (features[2] <= 16.799999237060547) {
                                    if (features[4] <= 7.053606033325195) {
                                        if (features[1] <= 3.9600000381469727) {
                                            classes[0] = 55; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 16; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[13] <= -30.0) {
                                            classes[0] = 17; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 183; 
                                            classes[1] = 28; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -1.3200000524520874) {
                                        if (features[2] <= 56.52000045776367) {
                                            classes[0] = 66; 
                                            classes[1] = 43; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 7.079999923706055) {
                                            classes[0] = 114; 
                                            classes[1] = 12; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 11; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[2] <= 2.0399999618530273) {
                            if (features[12] <= -18.0) {
                                if (features[1] <= 15.600000381469727) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[6] <= 11.39328384399414) {
                                if (features[4] <= 10.542741775512695) {
                                    if (features[3] <= 68.06999969482422) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[0] <= -11.039999961853027) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 21; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[13] <= 6.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[8] <= 54.0) {
                        if (features[1] <= -1.8000000715255737) {
                            if (features[3] <= 80.08000183105469) {
                                if (features[4] <= 12.318949699401855) {
                                    if (features[11] <= 67.0) {
                                        if (features[3] <= 55.69999694824219) {
                                            classes[0] = 0; 
                                            classes[1] = 10; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 18; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 24; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[4] <= 10.25732135772705) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[13] <= -54.0) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[6] <= 9.117938995361328) {
                                if (features[6] <= 7.531143665313721) {
                                    if (features[7] <= 0.8960456252098083) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 3; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[3] <= 58.01000213623047) {
                                        if (features[8] <= 30.0) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 10; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[2] <= 18.720001220703125) {
                                    if (features[2] <= -19.079999923706055) {
                                        if (features[3] <= 47.290000915527344) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 10; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 15.223455429077148) {
                            if (features[7] <= 0.618342399597168) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[6] <= 17.068561553955078) {
                                if (features[2] <= 27.1200008392334) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 22; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 27; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[8] <= 42.0) {
            if (features[13] <= 18.0) {
                if (features[3] <= 49.97999954223633) {
                    if (features[13] <= -18.0) {
                        if (features[6] <= 9.51374626159668) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    } else {
                        if (features[0] <= 3.9600000381469727) {
                            if (features[5] <= 20.285717010498047) {
                                if (features[15] <= 8.5) {
                                    if (features[5] <= 10.896402359008789) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[3] <= 13.600000381469727) {
                                        if (features[15] <= 12.5) {
                                            classes[0] = 6; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 35; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[11] <= 43.5) {
                                if (features[9] <= 60.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[11] <= 67.0) {
                        if (features[4] <= 14.420936584472656) {
                            if (features[2] <= 31.31999969482422) {
                                classes[0] = 0; 
                                classes[1] = 10; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[8] <= 30.0) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 5; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[14] <= -30.0) {
                            if (features[0] <= -0.11999999731779099) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 56; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[11] <= 43.5) {
                    if (features[7] <= 0.44248825311660767) {
                        if (features[13] <= 54.0) {
                            if (features[2] <= 48.0) {
                                classes[0] = 21; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 49; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[2] <= -15.360000610351562) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 11; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[15] <= 61.5) {
                if (features[11] <= 23.5) {
                    if (features[11] <= 21.5) {
                        if (features[2] <= 25.799999237060547) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 17; 
                        } else {
                            if (features[5] <= 22.229610443115234) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[6] <= 12.77023696899414) {
                            classes[0] = 10; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 11; 
                        }
                    }
                } else {
                    if (features[12] <= -42.0) {
                        if (features[10] <= -6.0) {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 126; 
                        }
                    } else {
                        if (features[5] <= 16.017179489135742) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 9; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
                classes[2] = 0; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_19(float features[]) {
    int classes[3];
    
    if (features[11] <= 45.5) {
        if (features[12] <= -42.0) {
            if (features[7] <= 0.7839852571487427) {
                if (features[6] <= 15.094383239746094) {
                    if (features[8] <= 66.0) {
                        if (features[11] <= 19.5) {
                            if (features[1] <= -10.319999694824219) {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            classes[0] = 20; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[11] <= 22.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[11] <= 44.5) {
                        if (features[1] <= 49.91999816894531) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 29; 
                        } else {
                            if (features[12] <= -54.0) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 4; 
                            } else {
                                if (features[5] <= 18.738624572753906) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        if (features[13] <= -54.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[5] <= 11.560553550720215) {
                    if (features[11] <= 34.0) {
                        classes[0] = 12; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 3.0) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[14] <= -6.0) {
                        if (features[3] <= 41.80999755859375) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 67; 
                        } else {
                            if (features[6] <= 16.5356502532959) {
                                classes[0] = 1; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            }
                        }
                    } else {
                        if (features[3] <= 35.70000076293945) {
                            if (features[1] <= 12.960000991821289) {
                                classes[0] = 4; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                if (features[4] <= 42.761627197265625) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 6; 
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        }
                    }
                }
            }
        } else {
            if (features[1] <= 69.83999633789062) {
                if (features[2] <= 0.6000000238418579) {
                    if (features[14] <= -18.0) {
                        if (features[9] <= 42.0) {
                            if (features[3] <= 41.980003356933594) {
                                if (features[1] <= 22.68000030517578) {
                                    if (features[0] <= -2.7547826766967773) {
                                        if (features[11] <= 5.5) {
                                            classes[0] = 1; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 34; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[0] <= 4.680000305175781) {
                                            classes[0] = 371; 
                                            classes[1] = 7; 
                                            classes[2] = 7; 
                                        } else {
                                            classes[0] = 6; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            } else {
                                if (features[1] <= 3.0) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[7] <= 0.686903715133667) {
                                if (features[5] <= 13.655985832214355) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 7; 
                                }
                            } else {
                                classes[0] = 6; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[13] <= -6.0) {
                            if (features[2] <= -3.239999771118164) {
                                if (features[6] <= 6.941596984863281) {
                                    if (features[3] <= 0.10000000149011612) {
                                        if (features[2] <= -6.119999885559082) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 19; 
                                        }
                                    } else {
                                        classes[0] = 3; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[1] <= 7.559999942779541) {
                                    if (features[4] <= 6.602876663208008) {
                                        classes[0] = 67; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[13] <= -30.0) {
                                            classes[0] = 2; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 11; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[11] <= 9.5) {
                                if (features[9] <= 18.0) {
                                    if (features[1] <= 2.0399999618530273) {
                                        if (features[6] <= 5.812994956970215) {
                                            classes[0] = 21; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 10; 
                                    }
                                } else {
                                    if (features[10] <= 6.0) {
                                        if (features[1] <= 18.360000610351562) {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        if (features[4] <= 5.820661544799805) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 8; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 4; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[5] <= 14.905414581298828) {
                        if (features[14] <= 30.0) {
                            if (features[13] <= -54.0) {
                                if (features[4] <= 7.3626909255981445) {
                                    if (features[4] <= 6.270881652832031) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[5] <= 6.510077476501465) {
                                        if (features[2] <= 29.639999389648438) {
                                            classes[0] = 1; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                }
                            } else {
                                if (features[7] <= 1.4245953559875488) {
                                    if (features[4] <= 18.294292449951172) {
                                        if (features[11] <= 0.5) {
                                            classes[0] = 213; 
                                            classes[1] = 0; 
                                            classes[2] = 11; 
                                        } else {
                                            classes[0] = 602; 
                                            classes[1] = 4; 
                                            classes[2] = 3; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[0] <= -1.440000057220459) {
                                        if (features[5] <= 8.09344482421875) {
                                            classes[0] = 20; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        if (features[4] <= 0.8485281467437744) {
                                            classes[0] = 3; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 98; 
                                            classes[1] = 4; 
                                            classes[2] = 2; 
                                        }
                                    }
                                }
                            }
                        } else {
                            if (features[7] <= 0.11994896829128265) {
                                if (features[5] <= 4.703911781311035) {
                                    if (features[13] <= 12.0) {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 15; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[3] <= 10.239999771118164) {
                                    if (features[2] <= 42.23999786376953) {
                                        classes[0] = 2; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[15] <= 1.0) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[3] <= 41.69999694824219) {
                                        if (features[9] <= 6.0) {
                                            classes[0] = 33; 
                                            classes[1] = 2; 
                                            classes[2] = 1; 
                                        } else {
                                            classes[0] = 40; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[6] <= 10.523765563964844) {
                            if (features[5] <= 17.917030334472656) {
                                if (features[15] <= 14.0) {
                                    classes[0] = 2; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[5] <= 17.380786895751953) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            } else {
                                classes[0] = 8; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[8] <= 30.0) {
                                if (features[8] <= 18.0) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[1] <= -2.3999998569488525) {
                                    if (features[1] <= -50.15999984741211) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 5; 
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[6] <= 8.461339950561523) {
                    if (features[11] <= 25.0) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 7; 
                }
            }
        }
    } else {
        if (features[1] <= 14.279999732971191) {
            if (features[5] <= 13.38131332397461) {
                if (features[7] <= 1.0097483396530151) {
                    if (features[0] <= 0.35999998450279236) {
                        if (features[11] <= 87.5) {
                            if (features[3] <= 55.18000030517578) {
                                if (features[6] <= 7.276689529418945) {
                                    if (features[13] <= -30.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[12] <= -42.0) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 15; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[13] <= -6.0) {
                                        if (features[11] <= 51.0) {
                                            classes[0] = 4; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 9.917512893676758) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[13] <= -30.0) {
                                    if (features[1] <= -33.84000015258789) {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[7] <= 0.0707106813788414) {
                                            classes[0] = 4; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 14; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[9] <= -6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 20.02294158935547) {
                                            classes[0] = 118; 
                                            classes[1] = 19; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 11; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[11] <= 90.0) {
                            if (features[11] <= 71.5) {
                                if (features[5] <= 6.447504997253418) {
                                    if (features[9] <= 6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= -1.440000057220459) {
                                            classes[0] = 2; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 12; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= -25.68000030517578) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[4] <= 8.680235862731934) {
                                            classes[0] = 21; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 115; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[4] <= 11.19021987915039) {
                                    if (features[5] <= 12.249530792236328) {
                                        classes[0] = 40; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[13] <= -18.0) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[1] <= 7.680000305175781) {
                                        if (features[13] <= -30.0) {
                                            classes[0] = 1; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 19; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 11; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 7; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[5] <= 10.810620307922363) {
                        if (features[2] <= 48.599998474121094) {
                            if (features[6] <= 6.298349380493164) {
                                if (features[11] <= 47.5) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= -4.920000076293945) {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[3] <= 59.27000427246094) {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[0] <= 0.8400000333786011) {
                                    if (features[14] <= -30.0) {
                                        if (features[9] <= 18.0) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[4] <= 15.175286293029785) {
                                            classes[0] = 36; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 43; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[9] <= 6.0) {
                                classes[0] = 16; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        if (features[11] <= 65.5) {
                            if (features[7] <= 1.5030401945114136) {
                                classes[0] = 0; 
                                classes[1] = 7; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 3; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[2] <= -25.920000076293945) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 10; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            } else {
                if (features[3] <= 56.970001220703125) {
                    if (features[5] <= 21.077932357788086) {
                        if (features[5] <= 16.249502182006836) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                            classes[2] = 0; 
                        } else {
                            if (features[4] <= 29.27663803100586) {
                                if (features[2] <= 31.439998626708984) {
                                    if (features[11] <= 46.5) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 6; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                            }
                        }
                    } else {
                        if (features[12] <= -42.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 38; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    if (features[4] <= 6.47332763671875) {
                        classes[0] = 1; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[6] <= 13.740823745727539) {
                            if (features[5] <= 16.099470138549805) {
                                if (features[15] <= 68.0) {
                                    if (features[10] <= -6.0) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 4; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[4] <= 14.808124542236328) {
                                        classes[0] = 0; 
                                        classes[1] = 13; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[2] <= 0.8400001525878906) {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 44; 
                                classes[2] = 0; 
                            }
                        } else {
                            if (features[3] <= 64.3800048828125) {
                                if (features[5] <= 14.328695297241211) {
                                    classes[0] = 1; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 2; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[6] <= 13.09342098236084) {
                if (features[9] <= 54.0) {
                    if (features[14] <= -30.0) {
                        classes[0] = 6; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= -6.960000038146973) {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        } else {
                            if (features[0] <= 1.3200000524520874) {
                                classes[0] = 0; 
                                classes[1] = 42; 
                                classes[2] = 0; 
                            } else {
                                if (features[0] <= 1.559999942779541) {
                                    classes[0] = 3; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[7] <= 0.0707106813788414) {
                                        if (features[3] <= 68.5) {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 17; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 26; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 27; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict (float features[]) {
    int n_classes = 3;
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
    classes[predict_15(features)]++;
    classes[predict_16(features)]++;
    classes[predict_17(features)]++;
    classes[predict_18(features)]++;
    classes[predict_19(features)]++;

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