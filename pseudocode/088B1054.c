/* Entry 0x088B1054 | file offset 0x000AE02C | FUN_088b1054 | bytes 320 */

undefined4 FUN_088b1054(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  FUN_088fe9cc();
  while (iVar2 = FUN_088fea4c(), iVar2 != 0) {
    FUN_08883f9c(DAT_089d69e0,1,0);
  }
  FUN_088fe9e8();
  *(undefined1 *)((int)param_1 + 0x591) = 0;
  iVar2 = 0;
  iVar3 = 0x58;
  uVar6 = *param_1;
  puVar5 = param_1;
  puVar7 = param_1 + 0xb1;
  do {
    uVar4 = puVar5[1];
    *puVar7 = uVar6;
    iVar2 = iVar2 + 8;
    puVar7[1] = uVar4;
    puVar5 = (undefined4 *)((int)param_1 + iVar2);
    iVar3 = iVar3 + -1;
    uVar6 = *puVar5;
    puVar7 = (undefined4 *)((int)(param_1 + 0xb1) + iVar2);
  } while (iVar3 != 0);
  *puVar7 = uVar6;
  iVar2 = sceUtilityMsgDialogInitStart(param_1);
  if (iVar2 == 0) {
    uVar1 = FUN_088b178c(DAT_089d7280);
    *(undefined1 *)(param_1 + 0x164) = uVar1;
    if (*(char *)(param_1 + 0x164) == '\0') {
      FUN_088729c0();
      FUN_088b16fc(DAT_089d7280);
    }
    *DAT_089d7280 = 1;
    uVar6 = FUN_08882274(DAT_089d69a8);
    FUN_088823c4(uVar6,0xffffffff,0x19a28,FUN_088b1604,"Update");
    uVar6 = 1;
  }
  else {
    param_1[0x162] = 0;
    param_1[0x163] = 0;
    uVar6 = 0;
  }
  return uVar6;
}

