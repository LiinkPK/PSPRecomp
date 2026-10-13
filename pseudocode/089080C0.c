/* Entry 0x089080C0 | file offset 0x00105098 | FUN_089080c0 | bytes 1384 */

void FUN_089080c0(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  float fVar9;
  
  puVar8 = (uint *)(param_1 + 0x1670);
  bVar2 = false;
  FUN_08907c0c();
  if (*(int *)(param_1 + 0x1644) == 0) {
    uVar3 = *puVar8;
    if (uVar3 < 6) {
      if (uVar3 == 1) {
        piVar6 = *(int **)(param_1 + 0xad8);
        bVar1 = false;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x3c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x38),0);
          bVar1 = false;
          if (iVar4 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          *puVar8 = 2;
        }
      }
      else if (uVar3 == 2) {
        puVar5 = (undefined4 *)
                 (param_1 + *(int *)(param_1 + 0x1674) * 0x80 + 0x34 +
                 *(int *)(param_1 + 0x1678) * 8);
        iVar4 = FUN_08906848(param_1 + 0x808,*puVar5,puVar5[1]);
        if (iVar4 == 1) {
          *puVar8 = 3;
        }
      }
      else if (uVar3 == 3) {
        piVar6 = *(int **)(param_1 + 0xad8);
        bVar1 = false;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x44))((int)piVar6 + (int)*(short *)(*piVar6 + 0x40),0);
          bVar1 = false;
          if (iVar4 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          iVar7 = param_1 + *(int *)(param_1 + 0x1674) * 0x80;
          iVar4 = *(int *)(param_1 + 0x1678);
          if (0 < *(int *)(iVar7 + 0x60)) {
            iVar4 = iVar4 + 1;
            *(int *)(param_1 + 0x1678) = iVar4;
          }
          if (iVar4 == *(int *)(iVar7 + 0x60)) {
            *(undefined4 *)(param_1 + 0x1678) = 0;
            *(int *)(param_1 + 0x1674) = *(int *)(param_1 + 0x1674) + 1;
            if (*(int *)(param_1 + 0x1674) == *(int *)(param_1 + 0x804)) {
              *puVar8 = 4;
              *(undefined4 *)(param_1 + 0x1674) = 0;
            }
            else {
              *puVar8 = 0;
            }
          }
          else {
            *puVar8 = 0;
          }
        }
      }
      else if (uVar3 == 4) {
        iVar4 = param_1 + *(int *)(param_1 + 0x1674) * 0x80;
        iVar4 = FUN_089067d8(param_1 + 0x808,*(undefined4 *)(iVar4 + 0xc),
                             *(undefined4 *)(iVar4 + 0x10));
        if (iVar4 == 1) {
          *puVar8 = 5;
        }
      }
      else if (uVar3 == 5) {
        piVar6 = *(int **)(param_1 + 0xad8);
        bVar1 = false;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x3c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x38),0);
          bVar1 = false;
          if (iVar4 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          iVar4 = *(int *)(param_1 + 0x1674) + 1;
          *(int *)(param_1 + 0x1674) = iVar4;
          if (iVar4 == *(int *)(param_1 + 0x804)) {
            bVar2 = true;
          }
          else {
            *puVar8 = 4;
          }
        }
      }
      else {
        iVar4 = param_1 + *(int *)(param_1 + 0x1674) * 0x80;
        if (*(int *)(iVar4 + 0x60) < 1) {
          *puVar8 = 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x1684) = 0x555;
          iVar4 = FUN_089067d8(param_1 + 0x808,param_1 + 0x1684,4,iVar4 + 4);
          if (iVar4 == 1) {
            *puVar8 = 1;
          }
        }
      }
    }
  }
  else {
    puVar8 = (uint *)(param_1 + 0x167c);
    uVar3 = *puVar8;
    iVar4 = param_1 + 4;
    if (uVar3 < 6) {
      if (uVar3 == 1) {
        piVar6 = *(int **)(param_1 + 0xad8);
        bVar1 = false;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x44))((int)piVar6 + (int)*(short *)(*piVar6 + 0x40),0);
          bVar1 = false;
          if (iVar4 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          *puVar8 = 2;
        }
      }
      else if (uVar3 == 2) {
        puVar5 = (undefined4 *)(param_1 + 0xc + *(int *)(param_1 + 0x1680) * 8);
        iVar4 = FUN_089067d8(param_1 + 0x808,*puVar5,puVar5[1],iVar4);
        if (iVar4 == 1) {
          *puVar8 = 3;
        }
      }
      else if (uVar3 == 3) {
        piVar6 = *(int **)(param_1 + 0xad8);
        bVar1 = false;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x3c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x38),0);
          bVar1 = false;
          if (iVar4 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          iVar4 = *(int *)(param_1 + 0x1680) + 1;
          *(int *)(param_1 + 0x1680) = iVar4;
          uVar3 = 0;
          if (iVar4 == *(int *)(param_1 + 0x5c)) {
            uVar3 = 4;
          }
          *puVar8 = uVar3;
        }
      }
      else if (uVar3 == 4) {
        iVar4 = FUN_08906848(param_1 + 0x808,*(undefined4 *)(param_1 + 0x34),
                             *(undefined4 *)(param_1 + 0x38),iVar4);
        if (iVar4 == 1) {
          *puVar8 = 5;
        }
      }
      else if (uVar3 == 5) {
        piVar6 = *(int **)(param_1 + 0xad8);
        bVar1 = false;
        if (piVar6 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar6 + 0x44))((int)piVar6 + (int)*(short *)(*piVar6 + 0x40),0);
          bVar1 = false;
          if (iVar4 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      else {
        iVar4 = FUN_08906848(param_1 + 0x808,param_1 + 0x1684,4,iVar4);
        if (iVar4 == 1) {
          *puVar8 = 1;
        }
      }
    }
  }
  if (bVar2) {
    piVar6 = *(int **)(param_1 + 0x1660);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x2c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x1658) = 6;
  }
  if ((0.0 < *(float *)(param_1 + 0x1688)) &&
     (fVar9 = *(float *)(param_1 + 0x1688) - *(float *)(DAT_089d69e0 + 0x18),
     *(float *)(param_1 + 0x1688) = fVar9, fVar9 <= 0.0)) {
    piVar6 = *(int **)(param_1 + 0x1660);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x1c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x18),2);
    }
    *(undefined4 *)(param_1 + 0x1658) = 6;
  }
  return;
}

