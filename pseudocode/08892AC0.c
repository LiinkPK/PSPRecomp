/* Entry 0x08892AC0 | file offset 0x0008FA98 | FUN_08892ac0 | bytes 400 */

void FUN_08892ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  
  iVar1 = FUN_08940490(param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_08940528(iVar1,3,0), iVar1 != 0)) {
    iVar2 = FUN_089404a8(iVar1,4);
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        puVar3 = (ushort *)FUN_08940528(iVar1,4,iVar7);
        puVar8 = puVar3 + 8;
        if ((*puVar3 & 0x8000) != 0) {
          puVar8 = (ushort *)&DAT_089ca778;
        }
        iVar4 = FUN_08935b50(puVar8,&DAT_089ca788,4);
        if (iVar4 == 0) {
          piVar5 = (int *)FUN_08899300();
          if (*piVar5 != 0) {
            uVar6 = FUN_08899300();
            FUN_088989f4(uVar6,puVar8,iVar7);
          }
        }
        else {
          iVar4 = FUN_08935b50(puVar8,&DAT_089ca790,4);
          if (iVar4 == 0) {
            piVar5 = (int *)FUN_08899300();
            if (*piVar5 != 0) {
              uVar6 = FUN_08899300();
              FUN_088989f4(uVar6,puVar8,iVar7);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  return;
}

