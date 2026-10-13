/* Entry 0x089090F0 | file offset 0x001060C8 | FUN_089090f0 | bytes 1432 */

void FUN_089090f0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  int local_9c0 [608];
  int local_40;
  undefined1 auStack_3c [6];
  undefined1 auStack_36 [6];
  undefined1 auStack_30 [6];
  undefined1 auStack_2a [6];
  
  piVar14 = local_9c0;
  local_40 = 0x980;
  iVar6 = sceNetAdhocctlGetPeerList(&local_40,local_9c0);
  if (iVar6 < 0) {
    *(undefined4 *)(param_1 + 0x23c) = 5;
  }
  else {
    if (local_40 < 1) {
      *(undefined4 *)(param_1 + 0x238) = 0;
    }
    else {
      uVar15 = sceKernelGetSystemTimeWide();
      iVar6 = (int)((ulonglong)uVar15 >> 0x20);
      uVar8 = (uint)uVar15;
      if (&stack0x00000000 != (undefined1 *)0x9c0) {
        do {
          iVar10 = 0;
          bVar5 = false;
          if (0 < *(int *)(param_1 + 0x238)) {
            do {
              uVar9 = FUN_089057e4(auStack_3c,piVar14 + 0x21);
              iVar13 = FUN_08935490(param_1 + iVar10 * 0x20 + 0x38,uVar9,6);
              if (iVar13 == 0) {
                bVar5 = true;
                break;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 0x238));
          }
          if ((!bVar5) && (*(int *)(param_1 + 0x238) < 0x10)) {
            iVar13 = param_1 + *(int *)(param_1 + 0x238) * 0x20;
            uVar1 = *(undefined1 *)((int)piVar14 + 0x85);
            uVar2 = *(undefined1 *)((int)piVar14 + 0x86);
            *(char *)(iVar13 + 0x38) = (char)piVar14[0x21];
            uVar3 = *(undefined1 *)((int)piVar14 + 0x87);
            *(undefined1 *)(iVar13 + 0x39) = uVar1;
            iVar10 = piVar14[0x22];
            *(undefined1 *)(iVar13 + 0x3a) = uVar2;
            uVar1 = *(undefined1 *)((int)piVar14 + 0x89);
            *(undefined1 *)(iVar13 + 0x3b) = uVar3;
            *(char *)(iVar13 + 0x3c) = (char)iVar10;
            *(undefined1 *)(iVar13 + 0x3d) = uVar1;
            iVar10 = *(int *)(param_1 + 0x238);
            iVar13 = param_1 + iVar10 * 0x20;
            *(undefined1 *)(iVar13 + 0x48) = 0;
            *(undefined8 *)(iVar13 + 0x50) = uVar15;
            *(int *)(param_1 + 0x238) = iVar10 + 1;
          }
          piVar14 = (int *)*piVar14;
        } while (piVar14 != (int *)0x0);
      }
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x238)) {
        do {
          iVar13 = param_1 + iVar10 * 0x20;
          bVar5 = false;
          piVar14 = local_9c0;
          if (&stack0x00000000 != (undefined1 *)0x9c0) {
            do {
              uVar9 = FUN_089057e4(auStack_36,piVar14 + 0x21);
              iVar7 = FUN_08935490(iVar13 + 0x38,uVar9,6);
              if (iVar7 == 0) {
                uVar11 = (uint)(uVar8 < (uint)piVar14[0x24]);
                uVar12 = iVar6 - piVar14[0x25];
                if ((uVar12 != uVar11 || uVar8 - piVar14[0x24] < 0x1312d01) && uVar12 == uVar11) {
                  if (*(char *)(iVar13 + 0x48) == '\0') {
                    uVar11 = (uint)(uVar8 < *(uint *)(iVar13 + 0x50));
                    uVar12 = iVar6 - *(int *)(iVar13 + 0x54);
                    if ((uVar12 != uVar11 || uVar8 - *(uint *)(iVar13 + 0x50) < 0x1312d01) &&
                        uVar12 == uVar11) {
                      bVar5 = true;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                }
                break;
              }
              piVar14 = (int *)*piVar14;
            } while (piVar14 != (int *)0x0);
          }
          if (!bVar5) {
            iVar13 = iVar10;
            if (iVar10 < *(int *)(param_1 + 0x238) + -1) {
              do {
                iVar7 = param_1 + iVar13 * 0x20;
                *(undefined1 *)(iVar7 + 0x38) = *(undefined1 *)(iVar7 + 0x58);
                *(undefined1 *)(iVar7 + 0x39) = *(undefined1 *)(iVar7 + 0x59);
                *(undefined1 *)(iVar7 + 0x3a) = *(undefined1 *)(iVar7 + 0x5a);
                *(undefined1 *)(iVar7 + 0x3b) = *(undefined1 *)(iVar7 + 0x5b);
                *(undefined1 *)(iVar7 + 0x3c) = *(undefined1 *)(iVar7 + 0x5c);
                *(undefined1 *)(iVar7 + 0x3d) = *(undefined1 *)(iVar7 + 0x5d);
                *(undefined1 *)(iVar7 + 0x48) = *(undefined1 *)(iVar7 + 0x68);
                if ((*(int *)(iVar7 + 0x40) != 0) && (*(int *)(iVar7 + 0x60) != 0)) {
                  FUN_08935524(*(undefined4 *)(iVar7 + 0x40),*(undefined4 *)(iVar7 + 0x60),
                               *(undefined4 *)(iVar7 + 0x44));
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < *(int *)(param_1 + 0x238) + -1);
            }
            iVar10 = iVar10 + -1;
            *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x238));
      }
    }
    uVar8 = sceKernelGetSystemTimeLow();
    iVar6 = -(uint)(uVar8 < *(uint *)(param_1 + 0x250));
    if (iVar6 == *(int *)(param_1 + 0x254) && 1000000 < uVar8 - *(uint *)(param_1 + 0x250) ||
        iVar6 != *(int *)(param_1 + 0x254)) {
      *(undefined4 *)(param_1 + 0x254) = 0;
      *(uint *)(param_1 + 0x250) = uVar8;
      iVar6 = *(int *)(param_1 + 600) + 1;
      *(int *)(param_1 + 600) = iVar6;
      if (*(int *)(param_1 + 0x238) <= iVar6) {
        *(undefined4 *)(param_1 + 600) = 0;
      }
      FUN_0890569c(param_1 + 0x14,param_1 + *(int *)(param_1 + 600) * 0x20 + 0x38,
                   *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    }
LAB_089094d4:
    FUN_089057bc(auStack_30);
    iVar6 = FUN_08905728(param_1 + 0x14,auStack_30,*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),0);
    if (iVar6 != 0) {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x238)) {
        do {
          iVar13 = param_1 + iVar6 * 0x20;
          uVar9 = FUN_08905810(auStack_2a,auStack_30);
          iVar10 = FUN_08935490(iVar13 + 0x38,uVar9,6);
          if (iVar10 == 0) {
            if ((*(int *)(iVar13 + 0x40) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
              FUN_08935524(*(undefined4 *)(iVar13 + 0x40),*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(iVar13 + 0x44));
            }
            *(undefined1 *)(iVar13 + 0x48) = 1;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x238));
      }
      goto LAB_089094d4;
    }
    cVar4 = *(char *)(param_1 + 0x25d);
    *(undefined1 *)(param_1 + 0x25d) = 1;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x238)) {
      do {
        if (*(char *)(param_1 + iVar6 * 0x20 + 0x48) == '\0') {
          *(undefined1 *)(param_1 + 0x25d) = 0;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x238));
    }
    if (((cVar4 == '\0') && (*(char *)(param_1 + 0x25d) == '\x01')) &&
       (*(int *)(param_1 + 0x20) != 0)) {
      iVar6 = **(int **)(param_1 + 0x20);
      (**(code **)(iVar6 + 0x1c))((int)*(int **)(param_1 + 0x20) + (int)*(short *)(iVar6 + 0x18));
    }
    if (*(int *)(param_1 + 0x238) == 0) {
      *(undefined1 *)(param_1 + 0x25c) = 1;
      FUN_08908fdc(param_1,3);
    }
  }
  return;
}

