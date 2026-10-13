/* Entry 0x088950CC | file offset 0x000920A4 | FUN_088950cc | bytes 700 */

void FUN_088950cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((param_2 != 0) && (iVar1 = FUN_08940528(param_2,3,0), iVar1 != 0)) {
    iVar2 = FUN_089404a8(iVar1,0xf1);
    iVar13 = 0;
    if (0 < iVar2) {
      iVar14 = param_1 + 0x78;
      do {
        puVar3 = (ushort *)FUN_08940528(iVar1,0xf1,iVar13);
        if ((*puVar3 & 0x8000) == 0) {
          puVar11 = (ushort *)((int)puVar3 + (uint)puVar3[1]);
        }
        else {
          puVar11 = puVar3 + 4;
        }
        iVar4 = FUN_08935970(puVar11,"CLEARCOLOR");
        if (iVar4 == 0) {
          if ((*puVar3 & 0x8000) == 0) {
            iVar4 = *(int *)(puVar3 + 6) - (uint)puVar3[1];
          }
          else {
            iVar4 = *(int *)(puVar3 + 2) + -8;
          }
          *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)((int)puVar11 + iVar4 + -4);
        }
        else {
          iVar4 = FUN_08935970(puVar11,&DAT_089ca884);
          if (iVar4 == 0) {
            if ((*puVar3 & 0x8000) == 0) {
              iVar4 = *(int *)(puVar3 + 6) - (uint)puVar3[1];
            }
            else {
              iVar4 = *(int *)(puVar3 + 2) + -8;
            }
            uVar15 = *(undefined4 *)((int)puVar11 + iVar4 + -8);
            uVar16 = *(undefined4 *)((int)puVar11 + iVar4 + -4);
            FUN_08864cb0(iVar14,*(undefined4 *)((int)puVar11 + iVar4 + -0xc));
            FUN_08864c74(uVar15,iVar14);
            FUN_08864c7c(uVar16,iVar14);
            *(undefined1 *)(param_1 + 0x84) = 1;
          }
          else {
            iVar4 = FUN_08935970(puVar11,&DAT_089ca888);
            if (iVar4 == 0) {
              if ((*puVar3 & 0x8000) == 0) {
                iVar4 = *(int *)(puVar3 + 6) - (uint)puVar3[1];
              }
              else {
                iVar4 = *(int *)(puVar3 + 2) + -8;
              }
              *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((int)puVar11 + iVar4 + -0x68);
              iVar10 = iVar4 + -0x60;
              *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((int)puVar11 + iVar4 + -100);
              puVar12 = (undefined4 *)((int)puVar11 + iVar4 + -0x5c);
              puVar6 = (undefined4 *)((int)puVar11 + iVar4 + -0x58);
              puVar7 = (undefined4 *)((int)puVar11 + iVar4 + -0x54);
              puVar8 = (undefined4 *)((int)puVar11 + iVar4 + -0x50);
              iVar5 = 0;
              puVar9 = (undefined4 *)((int)puVar11 + iVar4 + -0x4c);
              iVar4 = param_1;
              do {
                *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)((int)puVar11 + iVar10);
                *(undefined4 *)(iVar4 + 0x98) = *puVar12;
                *(undefined4 *)(iVar4 + 0x9c) = *puVar6;
                iVar5 = iVar5 + 1;
                *(undefined4 *)(iVar4 + 0xa0) = *puVar7;
                iVar10 = iVar10 + 0x18;
                *(undefined4 *)(iVar4 + 0xa4) = *puVar8;
                puVar12 = puVar12 + 6;
                *(undefined4 *)(iVar4 + 0xa8) = *puVar9;
                puVar6 = puVar6 + 6;
                puVar7 = puVar7 + 6;
                puVar8 = puVar8 + 6;
                puVar9 = puVar9 + 6;
                iVar4 = iVar4 + 0x1c;
              } while (iVar5 < 4);
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar2);
    }
  }
  return;
}

