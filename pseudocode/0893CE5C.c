/* Entry 0x0893CE5C | file offset 0x00139E34 | FUN_0893ce5c | bytes 744 */

void FUN_0893ce5c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  
  puVar2 = DAT_089d8d88;
  puVar1 = PTR_DAT_089d8980;
  uVar7 = *(uint *)(PTR_DAT_089d8980 + 4) & 0xfffffffc;
  puVar9 = PTR_DAT_089d8980 + uVar7;
  uVar8 = DAT_089d8d84 + param_2 + 0x10;
  if (DAT_089d8d88 != (undefined *)0xffffffff) {
    uVar8 = DAT_089d8d84 + param_2 + 0x100fU & 0xfffff000;
  }
  puVar4 = (undefined *)FUN_0893f058(param_1,uVar8);
  if ((puVar4 != (undefined *)0xffffffff) && ((puVar9 <= puVar4 || (puVar1 == &DAT_089d8978)))) {
    DAT_089d8d94 = DAT_089d8d94 + uVar8;
    if (puVar4 == puVar9) {
      *(uint *)(PTR_DAT_089d8980 + 4) = uVar7 + uVar8 | 1;
    }
    else {
      puVar3 = puVar4;
      if (DAT_089d8d88 != (undefined *)0xffffffff) {
        DAT_089d8d94 = puVar4 + ((int)DAT_089d8d94 - (int)puVar9);
        puVar3 = DAT_089d8d88;
      }
      DAT_089d8d88 = puVar3;
      if (((uint)(puVar4 + 8) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x10 - ((uint)(puVar4 + 8) & 0xf);
        puVar4 = puVar4 + iVar6;
      }
      iVar6 = iVar6 + (0x1000 - ((uint)(puVar4 + uVar8) & 0xfff));
      iVar5 = FUN_0893f058(param_1,iVar6);
      if (iVar5 == -1) {
        DAT_089d8d94 = (undefined *)
                       ((int)DAT_089d8d94 -
                       (int)(puVar4 + (-(int)puVar9 -
                                      (iVar6 - (0x1000 - ((uint)(puVar4 + uVar8) & 0xfff))))));
        FUN_0893f058(param_1,-uVar8);
        DAT_089d8d88 = puVar2;
        return;
      }
      DAT_089d8d94 = DAT_089d8d94 + iVar6;
      PTR_DAT_089d8980 = puVar4;
      *(uint *)(puVar4 + 4) = (iVar5 - (int)puVar4) + iVar6 | 1;
      if (puVar1 != &DAT_089d8978) {
        if (uVar7 < 0x10) {
          *(undefined4 *)(PTR_DAT_089d8980 + 4) = 1;
          return;
        }
        uVar7 = uVar7 - 0xc & 0xfffffff0;
        *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 1 | uVar7;
        *(undefined4 *)(puVar1 + uVar7 + 4) = 5;
        *(undefined4 *)(puVar1 + uVar7 + 8) = 5;
        if (0xf < uVar7) {
          FUN_0893d778(param_1,puVar1 + 8);
        }
      }
    }
    if (DAT_089d8d8c < DAT_089d8d94) {
      DAT_089d8d8c = DAT_089d8d94;
    }
    if (DAT_089d8d90 < DAT_089d8d94) {
      DAT_089d8d90 = DAT_089d8d94;
    }
  }
  return;
}

