/* Entry 0x08931C28 | file offset 0x0012EC00 | FUN_08931c28 | bytes 312 */

void FUN_08931c28(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = DAT_089d712c + 0x3e0b0;
    iVar1 = FUN_0892a1e0(iVar7 + (uint)(byte)param_2[1] * 0x154);
    if (iVar1 != 0) {
      puVar6 = (undefined4 *)(iVar7 + (uint)(byte)param_2[1] * 0x154);
      iVar1 = 0;
      iVar7 = 0x2a;
      uVar4 = *puVar6;
      puVar3 = puVar6;
      puVar5 = param_1;
      do {
        uVar2 = puVar3[1];
        *puVar5 = uVar4;
        iVar1 = iVar1 + 8;
        puVar5[1] = uVar2;
        puVar3 = (undefined4 *)((int)puVar6 + iVar1);
        iVar7 = iVar7 + -1;
        uVar4 = *puVar3;
        puVar5 = (undefined4 *)((int)param_1 + iVar1);
      } while (iVar7 != 0);
      *puVar5 = uVar4;
    }
  }
  else if (*param_2 == '\x02') {
    FUN_08929afc(param_1,DAT_089d76f0 + (uint)(byte)param_2[1] * 0x13c,param_3,param_4);
  }
  else {
    FUN_0892a13c(param_1);
  }
  return;
}

