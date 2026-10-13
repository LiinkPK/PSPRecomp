/* Entry 0x08810DD8 | file offset 0x0000DDB0 | FUN_08810dd8 | bytes 912 */

undefined4 FUN_08810dd8(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *piVar5;
  undefined1 auStack_30 [16];
  
  FUN_08810d8c();
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 < 1)) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    iVar2 = FUN_0885c6cc(param_2,param_4,0,0,1,0);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      FUN_08935524(iVar2,param_3,param_4);
      FUN_08810964(auStack_30);
      iVar2 = FUN_08810a20(auStack_30,*(undefined4 *)(param_1 + 8),param_4);
      if (iVar2 == 0) {
        iVar2 = FUN_08810a88(auStack_30,4);
        puVar1 = PTR_DAT_089d478c;
        if (iVar2 == 0) {
          FUN_0881099c(auStack_30,2);
          uVar3 = 0xfffffffc;
        }
        else {
          uVar3 = FUN_089359e8(PTR_DAT_089d478c);
          iVar2 = FUN_08935b50(iVar2,puVar1,uVar3);
          if (iVar2 == 0) {
            pfVar4 = (float *)FUN_08810a88(auStack_30,4);
            if (pfVar4 == (float *)0x0) {
              FUN_0881099c(auStack_30,2);
              uVar3 = 0xfffffffa;
            }
            else if (*pfVar4 == 1.01) {
              piVar5 = (int *)FUN_08810a88(auStack_30,4);
              if (piVar5 == (int *)0x0) {
                iVar2 = -2;
              }
              else {
                iVar2 = *piVar5;
                *(int *)(param_1 + 0xc) = iVar2;
                if (iVar2 < 0) {
                  iVar2 = -3;
                }
                else {
                  iVar2 = FUN_08810a88(auStack_30,iVar2 * 0xc);
                  *(int *)(param_1 + 0x10) = iVar2;
                  if (iVar2 == 0) {
                    iVar2 = -4;
                  }
                  else {
                    iVar2 = 0;
                  }
                }
              }
              if (iVar2 == 0) {
                piVar5 = (int *)FUN_08810a88(auStack_30,4);
                if (piVar5 == (int *)0x0) {
                  iVar2 = -2;
                }
                else {
                  iVar2 = *piVar5;
                  *(int *)(param_1 + 0x18) = iVar2;
                  if (iVar2 < 0) {
                    iVar2 = -3;
                  }
                  else {
                    iVar2 = FUN_08810a88(auStack_30,iVar2 * 0x14);
                    *(int *)(param_1 + 0x1c) = iVar2;
                    if (iVar2 == 0) {
                      iVar2 = -4;
                    }
                    else {
                      iVar2 = 0;
                    }
                  }
                }
                if (iVar2 == 0) {
                  piVar5 = (int *)FUN_08810a88(auStack_30,4);
                  if (piVar5 == (int *)0x0) {
                    iVar2 = -2;
                  }
                  else {
                    iVar2 = *piVar5;
                    *(int *)(param_1 + 0x24) = iVar2;
                    if (iVar2 < 0) {
                      iVar2 = -3;
                    }
                    else {
                      iVar2 = FUN_08810a88(auStack_30,iVar2 << 3);
                      *(int *)(param_1 + 0x28) = iVar2;
                      if (iVar2 == 0) {
                        iVar2 = -4;
                      }
                      else {
                        iVar2 = 0;
                      }
                    }
                  }
                  if (iVar2 == 0) {
                    piVar5 = (int *)FUN_08810a88(auStack_30,4);
                    if (piVar5 == (int *)0x0) {
                      iVar2 = -2;
                    }
                    else {
                      iVar2 = *piVar5;
                      *(int *)(param_1 + 0x30) = iVar2;
                      if (iVar2 < 0) {
                        iVar2 = -3;
                      }
                      else {
                        iVar2 = FUN_08810a88(auStack_30,iVar2 << 2);
                        *(int *)(param_1 + 0x34) = iVar2;
                        if (iVar2 == 0) {
                          iVar2 = -4;
                        }
                        else {
                          iVar2 = 0;
                        }
                      }
                    }
                    if (iVar2 == 0) {
                      piVar5 = (int *)FUN_08810a88(auStack_30,4);
                      if (piVar5 == (int *)0x0) {
                        iVar2 = -2;
                      }
                      else {
                        iVar2 = *piVar5;
                        *(int *)(param_1 + 0x3c) = iVar2;
                        if (iVar2 < 0) {
                          iVar2 = -3;
                        }
                        else {
                          iVar2 = FUN_08810a88(auStack_30,iVar2 * 0x18);
                          *(int *)(param_1 + 0x40) = iVar2;
                          if (iVar2 == 0) {
                            iVar2 = -4;
                          }
                          else {
                            iVar2 = 0;
                          }
                        }
                      }
                      if (iVar2 == 0) {
                        *param_1 = 1;
                        FUN_0881099c(auStack_30,2);
                        return 0;
                      }
                    }
                  }
                }
              }
              FUN_0881099c(auStack_30,2);
              uVar3 = 0xfffffff8;
            }
            else {
              FUN_0881099c(auStack_30,2);
              uVar3 = 0xfffffff9;
            }
          }
          else {
            FUN_0881099c(auStack_30,2);
            uVar3 = 0xfffffffb;
          }
        }
      }
      else {
        FUN_0881099c(auStack_30,2);
        uVar3 = 0xfffffffd;
      }
    }
  }
  return uVar3;
}

