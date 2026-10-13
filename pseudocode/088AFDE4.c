/* Entry 0x088AFDE4 | file offset 0x000ACDBC | FUN_088afde4 | bytes 988 */

int FUN_088afde4(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_20 [8];
  
  iVar5 = *(int *)(param_1 + 0xc);
  iVar6 = 0;
  bVar1 = false;
  if (*(int *)(iVar5 + 0x814) - 4U < 5) {
    iVar4 = *(int *)(iVar5 + 0x800);
    if (iVar4 == 0) {
      bVar1 = true;
    }
    else if (iVar4 != 1) {
      if (iVar4 == 2) {
        iVar4 = *(int *)(iVar5 + 0xdb0);
        if (iVar4 == 0) {
          bVar1 = true;
        }
        else if ((iVar4 != 1) && (iVar4 < 0)) {
          iVar6 = iVar4;
        }
      }
      else if (iVar4 < 0) {
        iVar6 = iVar4;
      }
    }
    if (bVar1) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
      iVar4 = *(int *)(iVar5 + 0x814);
      if (iVar4 == 5) {
        if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
        }
        *(undefined4 *)(iVar5 + 0x2b30) = 0;
      }
      else if (iVar4 == 4) {
        FUN_088af0d0(param_1);
        if ((*(uint *)(param_1 + 4) & 4) == 0) {
          iVar5 = FUN_089a5490(auStack_20,*(int *)(param_1 + 0xc) + 0x2b58);
          if (iVar5 < 0) {
            iVar5 = *(int *)(param_1 + 0xc);
            *(undefined4 *)(iVar5 + 0x2b5c) = 0;
            *(undefined4 *)(iVar5 + 0x2b58) = 0;
          }
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 2;
        }
      }
      else if (iVar4 == 8) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40;
        *(int *)(iVar5 + 0x2b38) = *(int *)(iVar5 + 0xdbc) + 0x14;
        uVar2 = *(uint *)(param_1 + 4);
        *(uint *)(param_1 + 4) = uVar2 & 0xfffffffd;
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 0x10) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 7;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
          }
        }
        else {
          uVar3 = 5;
          if ((uVar2 & 0x80) != 0) {
            uVar3 = 6;
          }
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = uVar3;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34) =
               *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b38);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
        }
      }
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
      if (*(int *)(iVar5 + 0x814) == 5) {
        if ((*(int *)(iVar5 + 0x2b30) == 0) && ((*(uint *)(param_1 + 4) & 0x80) != 0)) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
        }
      }
      else if (*(int *)(iVar5 + 0x814) == 8) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffbf;
        if (iVar6 == -0x7feefc3f) {
          *(undefined4 *)(iVar5 + 0x2b30) = 3;
          *(int *)(*(int *)(param_1 + 0xc) + 0x2b34) =
               *(int *)(*(int *)(param_1 + 0xc) + 0xdbc) + 0x14;
          iVar6 = 0;
          *(int *)(*(int *)(param_1 + 0xc) + 0x2b38) =
               *(int *)(*(int *)(param_1 + 0xc) + 0xdbc) + 0x14;
        }
        else if (iVar6 == -0x7feefc39) {
          *(int *)(iVar5 + 0x2b38) = *(int *)(iVar5 + 0xdbc) + 0x14;
          iVar6 = *(int *)(param_1 + 0xc);
          uVar2 = *(uint *)(*(int *)(iVar6 + 0xdbc) + 0x10);
          if (*(uint *)(*(int *)(iVar6 + 0xdb4) + 8) < uVar2) {
            if (0x3e6 < (int)uVar2) {
              uVar2 = 999;
            }
            FUN_0893476c(iVar6 + 0x2aa8,"%d KB",uVar2);
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 4;
            *(int *)(*(int *)(param_1 + 0xc) + 0x2b34) = *(int *)(param_1 + 0xc) + 0x2aa8;
            *(int *)(*(int *)(param_1 + 0xc) + 0x2b38) =
                 *(int *)(*(int *)(param_1 + 0xc) + 0xdbc) + 0x14;
          }
          else {
            *(undefined4 *)(iVar6 + 0x2b34) = 0;
          }
          iVar6 = 0;
        }
        if (iVar6 == 0) {
          uVar2 = *(uint *)(param_1 + 4);
          if ((uVar2 & 8) == 0) {
            if ((uVar2 & 0x10) != 0) {
              iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x2b30);
              uVar3 = 0xb;
              if ((iVar5 != 3) && (uVar3 = 7, iVar5 == 4)) {
                uVar3 = 0xc;
              }
              *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = uVar3;
              *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34) =
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b38);
              *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
            }
          }
          else {
            uVar3 = 5;
            if ((uVar2 & 0x80) != 0) {
              uVar3 = 6;
            }
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = uVar3;
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34) =
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b38);
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
          }
        }
      }
    }
  }
  return iVar6;
}

