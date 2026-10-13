/* Entry 0x088AE500 | file offset 0x000AB4D8 | FUN_088ae500 | bytes 1208 */

int FUN_088ae500(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + 0x210);
  iVar7 = 0;
  bVar5 = false;
  bVar1 = false;
  if (uVar3 < 9) {
    iVar4 = (int)(uVar3 * 4) >> 2;
    switch(uVar3) {
    default:
      iVar6 = *(int *)(param_1 + 0x1fc);
      if (iVar6 == 0) {
        bVar5 = true;
      }
      else if (iVar6 != 1) {
        if (iVar6 == 2) {
          iVar6 = *(int *)(param_1 + 0x7ac);
          if (iVar6 == 0) {
            bVar5 = true;
          }
          else if (iVar6 == 1) {
            bVar1 = true;
          }
          else if (iVar6 < 0) {
            iVar7 = iVar6;
          }
        }
        else if (iVar6 < 0) {
          iVar7 = iVar6;
        }
      }
      if (bVar5) {
        *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x200;
        if ((iVar4 == 5) || (iVar4 == 1)) {
          FUN_088acf0c(param_1);
          *(undefined1 *)(param_1 + 0xec0) = 1;
          uVar3 = *(uint *)(param_1 + 0xef8);
          *(undefined4 *)(param_1 + 0xeac) = 0;
          if ((uVar3 & 1) != 0) {
            FUN_088ad504(param_1);
            uVar3 = *(uint *)(param_1 + 0xef8) & 0xfffffffe;
            *(uint *)(param_1 + 0xef8) = uVar3;
          }
          if ((uVar3 & 0x8000) != 0) {
            *(uint *)(param_1 + 0xef8) = uVar3 & 0xffff7fff;
          }
        }
        else if ((iVar4 == 4) || (iVar4 == 0)) {
          FUN_088abbf4(param_1);
          uVar3 = *(uint *)(param_1 + 0xef8);
          if ((uVar3 & 0x20) == 0) {
            *(undefined1 *)(param_1 + 0xec0) = 1;
            if (((*(uint *)(DAT_089d712c + 0x3f5fc) & 1) == 0) || (*(int *)(param_1 + 0xef4) != 0))
            {
              *(uint *)(param_1 + 0xef8) = uVar3 & 0xfffffbff;
            }
            else {
              *(undefined4 *)(param_1 + 0xeac) = 0xe;
            }
            FUN_088acf0c(param_1,*(undefined4 *)(param_1 + 0x210));
            uVar3 = *(uint *)(param_1 + 0xef8);
          }
          else {
            *(undefined4 *)(param_1 + 0xeac) = 2;
          }
          if ((uVar3 & 8) != 0) {
            *(uint *)(param_1 + 0xef8) = uVar3 & 0xfffffff7;
          }
        }
        else if (iVar4 == 8) {
          uVar3 = *(uint *)(param_1 + 0xef8);
          *(uint *)(param_1 + 0xef8) = uVar3 | 0x800;
          *(int *)(param_1 + 0xeb4) = *(int *)(param_1 + 0x7b8) + 0x14;
          *(uint *)(param_1 + 0xef8) = uVar3 & 0xfffffffb | 0x800;
          if ((uVar3 & 0x80) == 0) {
            if ((uVar3 & 0x4000) != 0) {
              *(undefined4 *)(param_1 + 0xeac) = 0xf;
              *(uint *)(param_1 + 0xef8) = uVar3 & 0xffffbffb | 0x800;
            }
          }
          else {
            uVar2 = 7;
            if ((uVar3 & 0x8001) != 0) {
              uVar2 = 8;
            }
            *(undefined4 *)(param_1 + 0xeac) = uVar2;
            *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_1 + 0xeb4);
            *(uint *)(param_1 + 0xef8) = uVar3 & 0xffffff7b | 0x800;
          }
        }
      }
      else {
        if (iVar7 < 0) {
          *(undefined1 *)(param_1 + 0xec0) = 0;
        }
        *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffdff;
        if (iVar4 == 5) {
          if (*(int *)(param_1 + 0xeac) == 0) {
            uVar3 = *(uint *)(param_1 + 0xef8);
            if ((uVar3 & 1) != 0) {
              uVar3 = uVar3 & 0xfffffffe;
              *(uint *)(param_1 + 0xef8) = uVar3;
            }
            if ((uVar3 & 0x8000) != 0) {
              *(uint *)(param_1 + 0xef8) = uVar3 & 0xffff7fff;
            }
          }
        }
        else if (iVar4 == 4) {
          if ((*(uint *)(param_1 + 0xef8) & 8) != 0) {
            *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffff7;
          }
        }
        else if (iVar4 == 1) {
          if (bVar1) {
            *(undefined4 *)(param_1 + 0xeac) = 9;
          }
          FUN_088ad504(param_1);
        }
        else if (iVar4 == 8) {
          *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffff7ff;
          if (iVar7 == -0x7feefc3f) {
            *(undefined4 *)(param_1 + 0xeac) = 3;
            iVar7 = *(int *)(param_1 + 0x7b8) + 0x14;
            *(int *)(param_1 + 0xeb0) = iVar7;
            *(int *)(param_1 + 0xeb4) = iVar7;
            iVar7 = 0;
          }
          else if (iVar7 == -0x7feefc39) {
            *(int *)(param_1 + 0xeb4) = *(int *)(param_1 + 0x7b8) + 0x14;
            uVar3 = *(uint *)(*(int *)(param_1 + 0x7b8) + 0x10);
            if (*(uint *)(*(int *)(param_1 + 0x7b0) + 8) < uVar3) {
              if (0x3e6 < (int)uVar3) {
                uVar3 = 999;
              }
              FUN_0893476c(param_1 + 0xe10,"%d KB",uVar3);
              *(undefined4 *)(param_1 + 0xeac) = 4;
              *(int *)(param_1 + 0xeb0) = param_1 + 0xe10;
              *(int *)(param_1 + 0xeb4) = *(int *)(param_1 + 0x7b8) + 0x14;
            }
            else {
              *(undefined4 *)(param_1 + 0xeac) = 5;
              *(undefined4 *)(param_1 + 0xeb0) = 0;
            }
            iVar7 = 0;
          }
          if (iVar7 == 0) {
            uVar3 = *(uint *)(param_1 + 0xef8);
            if ((uVar3 & 0x40) == 0) {
              *(undefined4 *)(param_1 + 0xeac) = 0;
              uVar3 = uVar3 & 0xfffffffb;
              *(uint *)(param_1 + 0xef8) = uVar3;
            }
            if ((uVar3 & 0x80) == 0) {
              if ((uVar3 & 0x4000) != 0) {
                uVar2 = 0x13;
                if ((*(int *)(param_1 + 0xeac) != 3) &&
                   (uVar2 = 0xf, *(int *)(param_1 + 0xeac) == 4)) {
                  uVar2 = 0x14;
                }
                *(undefined4 *)(param_1 + 0xeac) = uVar2;
                *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_1 + 0xeb4);
                *(uint *)(param_1 + 0xef8) = uVar3 & 0xffffbfff;
              }
            }
            else {
              uVar2 = 7;
              if ((uVar3 & 0x8001) != 0) {
                uVar2 = 8;
              }
              *(undefined4 *)(param_1 + 0xeac) = uVar2;
              *(undefined4 *)(param_1 + 0xeb0) = *(undefined4 *)(param_1 + 0xeb4);
              *(uint *)(param_1 + 0xef8) = uVar3 & 0xffffff7f;
            }
          }
        }
      }
      break;
    case 2:
    case 3:
    case 6:
      break;
    }
  }
  return iVar7;
}

