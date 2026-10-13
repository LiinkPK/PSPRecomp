/* Entry 0x088FDC98 | file offset 0x000FAC70 | FUN_088fdc98 | bytes 1952 */

undefined4 FUN_088fdc98(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  puVar3 = *(uint **)(param_1 + 0x30);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  if ((*puVar3 & 0x20) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0887e798(DAT_089d6998,*(int *)(param_1 + 0x10));
    }
  }
  else {
    if (puVar3[3] != 0) {
      puVar3[3] = puVar3[3] - 1;
      return 1;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0887e798(DAT_089d6998,*(int *)(param_1 + 0x10));
    }
    FUN_088fc194(param_1);
    FUN_088fd0a0(param_1,0);
    FUN_088d9f5c(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa5c),4,1);
    FUN_088d9f5c(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xaac),3,1);
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x30) + 0xaac) + 0xe) = 7;
    **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xffffffdf;
  }
  uVar7 = 1;
  FUN_088fc2dc(param_1);
  puVar3 = *(uint **)(param_1 + 0x30);
  uVar4 = puVar3[2];
  if (uVar4 == 7) {
    if (*(int *)(param_1 + 0x10) == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_0887e718(DAT_089d6998);
      bVar1 = false;
      if (iVar2 == 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_088fca30(param_1);
    }
  }
  else if (uVar4 == 6) {
    if ((*(ushort *)(puVar3[0x297] + 0x20) & 0x20) != 0) {
      FUN_088fc588(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 7;
    }
  }
  else if (uVar4 == 5) {
    uVar4 = *puVar3;
    if ((uVar4 & 0x80) == 0) {
      if ((uVar4 & 0x100) == 0) {
        if ((uVar4 & 0x200) == 0) {
          iVar2 = FUN_088729a0(0);
          pcVar6 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
          iVar2 = (*pcVar6)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar6,4,0);
          if (iVar2 == 0) {
            iVar2 = FUN_088729a0(0);
            pcVar6 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
            iVar2 = (*pcVar6)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar6,8,0);
            if (iVar2 == 0) {
              iVar2 = FUN_088d688c(*(int *)(param_1 + 0x30) + 0x10e8,0);
              if (iVar2 != 0) {
                FUN_088fc070(param_1);
                **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 0x100;
                if (iVar2 < 0) {
                  if (*(int *)(*(int *)(param_1 + 0x30) + 0x10ec) != 0) {
                    FUN_088d9f5c(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xab4),3,1);
                  }
                }
                else if ((0 < iVar2) &&
                        (iVar2 = *(int *)(param_1 + 0x30),
                        *(int *)(iVar2 + 0x10ec) != *(int *)(iVar2 + 0x10f4))) {
                  FUN_088d9f5c(*(undefined4 *)(iVar2 + 0xab8),5,1);
                }
              }
              goto LAB_088fe400;
            }
          }
          FUN_088d4bf4(2);
          if (*(short *)(*(int *)(param_1 + 0x30) + 0x10) == 2) {
            iVar2 = FUN_088fc828(param_1);
            if (iVar2 == -1) {
              FUN_088fbf34(param_1);
              FUN_088fc6d0(param_1);
              if ((**(uint **)(param_1 + 0x30) & 0x10) == 0) {
                FUN_088fd4c4(param_1);
                *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 3;
                *(undefined2 *)(*(int *)(param_1 + 0x30) + 0x10) = 0;
                FUN_088fc298(param_1);
              }
              else {
                FUN_088fc184(param_1);
              }
            }
            else {
              FUN_088fbf8c(param_1);
              *(int *)(*(int *)(param_1 + 0x30) + 0x10a4) = iVar2;
              **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 0x200;
            }
          }
          else {
            FUN_088fbf0c(param_1);
            **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 0x80;
          }
        }
        else {
          iVar2 = FUN_088fc8e0(param_1);
          if (iVar2 != 0) {
            FUN_088fd0a0(param_1,1);
            **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffdff;
          }
        }
      }
      else {
        iVar2 = FUN_088fc8e0(param_1);
        if (iVar2 != 0) {
          FUN_088fc0bc(param_1);
          **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffeff;
        }
      }
    }
    else if (((uVar4 & 8) == 0) && (iVar2 = FUN_088fc8e0(param_1), iVar2 != 0)) {
      FUN_088fcd04(param_1,1);
      **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xffffff7f;
    }
  }
  else if (uVar4 == 2) {
    if ((*puVar3 & 0x40) == 0) {
      iVar2 = FUN_088729a0(0);
      pcVar6 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
      iVar2 = (*pcVar6)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar6,4,0);
      if (iVar2 == 0) {
        iVar2 = FUN_088729a0(0);
        pcVar6 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
        iVar2 = (*pcVar6)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar6,8,0);
        if (iVar2 == 0) {
          iVar2 = FUN_088d688c(*(int *)(param_1 + 0x30) + 0x10a0,0);
          if (iVar2 != 0) {
            FUN_088fcea4(param_1);
            FUN_088fba24(param_1);
            iVar5 = *(int *)(param_1 + 0x30);
            if (9 < *(short *)(iVar5 + 0x18)) {
              if (iVar2 < 0) {
                FUN_088d9f5c(*(undefined4 *)(iVar5 + 0xa78),10,1);
              }
              else if (0 < iVar2) {
                FUN_088d9f5c(*(undefined4 *)(iVar5 + 0xa7c),8,1);
              }
            }
          }
        }
        else {
          FUN_088d4bf4(2);
          FUN_088fbbe0(param_1);
          FUN_088fc6d0(param_1);
          if (*(short *)(*(int *)(param_1 + 0x30) + 0x10) == 1) {
            FUN_088fc184(param_1);
          }
          else {
            FUN_088fd4c4(param_1);
            *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 3;
          }
        }
      }
      else {
        FUN_088d4bf4(1);
        FUN_088fbf5c(param_1);
        **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 0x40;
      }
    }
    else {
      iVar2 = FUN_088fc8e0(param_1);
      if (iVar2 != 0) {
        FUN_088d3ea0(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089ccebc
                    );
        FUN_0887b944(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef0));
        FUN_088fd0a0(param_1,0);
        **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xffffffbf;
      }
    }
  }
  else if (uVar4 == 3) {
    if ((*(ushort *)(puVar3[0x297] + 0x20) & 0x20) != 0) {
      FUN_088fc220(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 4;
    }
  }
  else if (uVar4 == 4) {
    iVar2 = FUN_088fc8e0(param_1);
    if (iVar2 != 0) {
      FUN_088fc0e8(param_1);
      FUN_088fc364(param_1);
    }
  }
  else if (uVar4 == 1) {
    if (puVar3[3] == 0) {
      FUN_088fc194(param_1);
      FUN_088fcd04(param_1,0);
    }
    else {
      puVar3[3] = puVar3[3] - 1;
    }
  }
  else {
    iVar2 = FUN_08872088(0);
    pcVar6 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
    iVar2 = (*pcVar6)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar6,8,0);
    if (iVar2 == 0) {
      uVar7 = 0;
    }
    else {
      FUN_088fc15c(param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc) = 3;
    }
  }
LAB_088fe400:
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0887e7b4(DAT_089d6998);
  }
  return uVar7;
}

