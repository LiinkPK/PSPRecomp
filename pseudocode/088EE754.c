/* Entry 0x088EE754 | file offset 0x000EB72C | FUN_088ee754 | bytes 956 */

undefined4 FUN_088ee754(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20;
  
  if (DAT_089d7f00 == (char *)0x0) {
    uVar1 = 0;
  }
  else if (*DAT_089d7f00 == '\0') {
    uVar1 = 0;
  }
  else if (DAT_089d7f00[1] == '\0') {
    uVar1 = sceMpegQueryMemSize(0);
    uVar2 = (*(code *)PTR_FUN_089d7ef8)(uVar1);
    *(undefined4 *)(DAT_089d7f00 + 0x130) = uVar2;
    if (*(int *)(DAT_089d7f00 + 0x130) == 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = sceMpegRingbufferQueryMemSize(*(undefined4 *)(DAT_089d7f00 + 0x18));
      uVar2 = (*(code *)PTR_FUN_089d7ef8)(iVar3 + 0x40);
      *(undefined4 *)(DAT_089d7f00 + 0x134) = uVar2;
      if (*(int *)(DAT_089d7f00 + 0x134) == 0) {
        uVar1 = 0;
      }
      else {
        iVar3 = sceMpegRingbufferConstruct
                          (DAT_089d7f00 + 0x20,*(undefined4 *)(DAT_089d7f00 + 0x18),
                           *(int *)(DAT_089d7f00 + 0x134),iVar3,FUN_088edaa4,0);
        if (iVar3 == 0) {
          iVar3 = sceMpegCreate(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0x130),uVar1,
                                DAT_089d7f00 + 0x20,0x200,0,0);
          if (iVar3 == 0) {
            uVar1 = sceMpegMallocAvcEsBuf(DAT_089d7f00 + 0x1c);
            *(undefined4 *)(DAT_089d7f00 + 0xac) = uVar1;
            iVar3 = sceMpegQueryAtracEsSize(DAT_089d7f00 + 0x1c,&local_20,DAT_089d7f00 + 0x1a0);
            if (iVar3 == 0) {
              uVar1 = (*(code *)PTR_FUN_089d7ef8)(local_20 + 0x40);
              *(undefined4 *)(DAT_089d7f00 + 0x138) = uVar1;
              if (*(int *)(DAT_089d7f00 + 0x138) == 0) {
                uVar1 = 0;
              }
              else {
                *(uint *)(DAT_089d7f00 + 0x13c) =
                     *(int *)(DAT_089d7f00 + 0x138) + 0x3fU & 0xffffffc0;
                iVar3 = sceMpegInitAu(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0xac),
                                      DAT_089d7f00 + 0xb0);
                if (iVar3 == 0) {
                  iVar3 = sceMpegInitAu(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0x13c),
                                        DAT_089d7f00 + 0xf0);
                  if (iVar3 == 0) {
                    uVar1 = (*(code *)PTR_FUN_089d7ef8)
                                      (*(int *)(DAT_089d7f00 + 0x1a0) *
                                       *(int *)(DAT_089d7f00 + 0x198) + 0x40);
                    *(undefined4 *)(DAT_089d7f00 + 400) = uVar1;
                    if (*(int *)(DAT_089d7f00 + 400) == 0) {
                      uVar1 = 0;
                    }
                    else {
                      *(uint *)(DAT_089d7f00 + 0x194) =
                           *(int *)(DAT_089d7f00 + 400) + 0x3fU & 0xffffffc0;
                      uVar1 = (*(code *)PTR_FUN_089d7ef8)(*(int *)(DAT_089d7f00 + 0x198) << 2);
                      *(undefined4 *)(DAT_089d7f00 + 0x1d4) = uVar1;
                      if (*(int *)(DAT_089d7f00 + 0x1d4) == 0) {
                        uVar1 = 0;
                      }
                      else {
                        uVar1 = (*(code *)PTR_FUN_089d7ef8)(0x4000);
                        *(undefined4 *)(DAT_089d7f00 + 0x1a4) = uVar1;
                        if (*(int *)(DAT_089d7f00 + 0x1a4) == 0) {
                          uVar1 = 0;
                        }
                        else {
                          uVar1 = (*(code *)PTR_FUN_089d7ef8)
                                            (*(int *)(DAT_089d7f00 + 0x170) * 0x88000 + 0x40);
                          *(undefined4 *)(DAT_089d7f00 + 0x168) = uVar1;
                          if (*(int *)(DAT_089d7f00 + 0x168) == 0) {
                            uVar1 = 0;
                          }
                          else {
                            *(uint *)(DAT_089d7f00 + 0x16c) =
                                 *(int *)(DAT_089d7f00 + 0x168) + 0x3fU & 0xffffffc0;
                            uVar1 = (*(code *)PTR_FUN_089d7ef8)(*(int *)(DAT_089d7f00 + 0x170) << 2)
                            ;
                            *(undefined4 *)(DAT_089d7f00 + 0x1d0) = uVar1;
                            if (*(int *)(DAT_089d7f00 + 0x1d0) == 0) {
                              uVar1 = 0;
                            }
                            else {
                              FUN_08935828(*(int *)(DAT_089d7f00 + 0x1d0),0,
                                           *(int *)(DAT_089d7f00 + 0x170) << 2);
                              uVar1 = sceKernelCreateSema("SQEXTEC MoviePlayer Display Async",0,1,1,
                                                          0);
                              *(undefined4 *)(DAT_089d7f00 + 0x1bc) = uVar1;
                              if (*(int *)(DAT_089d7f00 + 0x1bc) < 0) {
                                uVar1 = 0;
                              }
                              else {
                                uVar1 = sceKernelCreateSema("SQEXTEC MoviePlayer Audio Async",0,1,1,
                                                            0);
                                *(undefined4 *)(DAT_089d7f00 + 0x1c0) = uVar1;
                                if (*(int *)(DAT_089d7f00 + 0x1c0) < 0) {
                                  uVar1 = 0;
                                }
                                else {
                                  uVar1 = 1;
                                  DAT_089d7f00[1] = '\x01';
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar1 = 0;
                  }
                }
                else {
                  uVar1 = 0;
                }
              }
            }
            else {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

