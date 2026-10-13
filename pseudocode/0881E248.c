/* Entry 0x0881E248 | file offset 0x0001B220 | FUN_0881e248 | bytes 968 */

undefined4 FUN_0881e248(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float *local_20;
  
  FUN_0881e200();
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 < 1)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0885c6cc(param_2,param_4,0,0,1,0);
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = param_2;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      FUN_08935524(iVar1,param_3,param_4);
      local_20 = (float *)(*(int *)(param_1 + 4) + 4);
      iVar1 = FUN_08935b50(*(int *)(param_1 + 4),PTR_DAT_089d4914,4);
      if (iVar1 == 0) {
        fVar3 = *local_20;
        local_20 = local_20 + 1;
        if (fVar3 == 15.05) {
          iVar1 = FUN_08819ad0(param_1 + 0xc,param_1 + 0x10,&local_20,0x14);
          if (iVar1 == 0) {
            iVar1 = FUN_08819b18(param_1 + 0x18,param_1 + 0x1c,param_1 + 0x20,param_1 + 0x24,
                                 &local_20,8,0x4c);
            if (iVar1 == 0) {
              iVar1 = FUN_08819b18(param_1 + 0x2c,param_1 + 0x30,param_1 + 0x34,param_1 + 0x38,
                                   &local_20,8,0x48);
              if (iVar1 == 0) {
                iVar1 = FUN_08819ad0(param_1 + 0x40,param_1 + 0x44,&local_20,0x20);
                if (iVar1 == 0) {
                  iVar1 = FUN_08819ad0(param_1 + 0x4c,param_1 + 0x50,&local_20,0x68);
                  if (iVar1 == 0) {
                    iVar1 = FUN_08819ad0(param_1 + 0x58,param_1 + 0x5c,&local_20,4);
                    if (iVar1 == 0) {
                      iVar1 = FUN_08819ad0(param_1 + 100,param_1 + 0x68,&local_20,4);
                      if (iVar1 == 0) {
                        iVar1 = FUN_08819ad0(param_1 + 0x70,param_1 + 0x74,&local_20,4);
                        if (iVar1 == 0) {
                          iVar1 = FUN_08819ad0(param_1 + 0x7c,param_1 + 0x80,&local_20,4);
                          if (iVar1 == 0) {
                            iVar1 = FUN_08819ad0(param_1 + 0x88,param_1 + 0x8c,&local_20,0x24);
                            if (iVar1 == 0) {
                              iVar1 = FUN_08819b18(param_1 + 0x94,param_1 + 0x98,param_1 + 0x9c,
                                                   param_1 + 0xa0,&local_20,8,4);
                              if (iVar1 == 0) {
                                iVar1 = FUN_08819ad0(param_1 + 0xa8,param_1 + 0xac,&local_20,0x10);
                                if (iVar1 == 0) {
                                  iVar1 = FUN_08819ad0(param_1 + 0xb4,param_1 + 0xb8,&local_20,0x18)
                                  ;
                                  if (iVar1 == 0) {
                                    iVar1 = FUN_08819ad0(param_1 + 0xc0,param_1 + 0xc4,&local_20,8);
                                    if (iVar1 == 0) {
                                      iVar1 = FUN_08819ad0(param_1 + 0xcc,param_1 + 0xd0,&local_20,8
                                                          );
                                      if (iVar1 == 0) {
                                        iVar1 = FUN_08819ad0(param_1 + 0xd8,param_1 + 0xdc,&local_20
                                                             ,0x14);
                                        if (iVar1 == 0) {
                                          iVar1 = FUN_08819ad0(param_1 + 0xe4,param_1 + 0xe8,
                                                               &local_20,4);
                                          if (iVar1 == 0) {
                                            iVar1 = FUN_08819ad0(param_1 + 0xf0,param_1 + 0xf4,
                                                                 &local_20,4);
                                            if (iVar1 == 0) {
                                              *param_1 = 1;
                                              uVar2 = 0;
                                            }
                                            else {
                                              uVar2 = 0xffffffe8;
                                            }
                                          }
                                          else {
                                            uVar2 = 0xffffffe9;
                                          }
                                        }
                                        else {
                                          uVar2 = 0xffffffea;
                                        }
                                      }
                                      else {
                                        uVar2 = 0xffffffeb;
                                      }
                                    }
                                    else {
                                      uVar2 = 0xffffffec;
                                    }
                                  }
                                  else {
                                    uVar2 = 0xffffffed;
                                  }
                                }
                                else {
                                  uVar2 = 0xffffffee;
                                }
                              }
                              else {
                                uVar2 = 0xffffffef;
                              }
                            }
                            else {
                              uVar2 = 0xfffffff0;
                            }
                          }
                          else {
                            uVar2 = 0xfffffff1;
                          }
                        }
                        else {
                          uVar2 = 0xfffffff2;
                        }
                      }
                      else {
                        uVar2 = 0xfffffff3;
                      }
                    }
                    else {
                      uVar2 = 0xfffffff4;
                    }
                  }
                  else {
                    uVar2 = 0xfffffff5;
                  }
                }
                else {
                  uVar2 = 0xfffffff6;
                }
              }
              else {
                uVar2 = 0xfffffff7;
              }
            }
            else {
              uVar2 = 0xfffffff8;
            }
          }
          else {
            uVar2 = 0xfffffff9;
          }
        }
        else {
          uVar2 = 0xfffffffa;
        }
      }
      else {
        uVar2 = 0xfffffffb;
      }
    }
  }
  return uVar2;
}

