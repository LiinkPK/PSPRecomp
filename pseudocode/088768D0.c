/* Entry 0x088768D0 | file offset 0x000738A8 | FUN_088768d0 | bytes 252 */

void FUN_088768d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_089a29c4();
  FUN_089a250c();
  FUN_089a2678(param_2);
  FUN_089a25dc(param_3);
  FUN_089a26c8(param_4);
  if (param_6 == '\0') {
    FUN_08876634(param_1,param_5,0);
  }
  else {
    puVar2 = &DAT_089d6bf8;
    puVar1 = &DAT_089d6bfc;
    iVar3 = 0;
    do {
      local_30 = *puVar1;
      local_2c = local_30;
      local_28 = local_30;
      FUN_089a26c8(&local_30);
      FUN_08876634(*puVar2,param_5,1);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
    } while (iVar3 < 3);
  }
  FUN_089a2a40();
  return;
}

