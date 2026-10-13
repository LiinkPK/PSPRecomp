/* Entry 0x088B6A2C | file offset 0x000B3A04 | FUN_088b6a2c | bytes 192 */

undefined2 * FUN_088b6a2c(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  DAT_09b4d488 = 0;
  DAT_09b4d48a = 0;
  DAT_09b4d48e = 100;
  DAT_09b4d48c = 100;
  if (param_1 != (undefined2 *)0x0) {
    puVar4 = (undefined2 *)FUN_088b69ac(*param_1);
    uVar1 = *puVar4;
    iVar5 = FUN_088b69ac(param_1[1]);
    uVar2 = *(undefined2 *)(iVar5 + 2);
    iVar5 = FUN_088b69ac(param_1[2]);
    uVar3 = *(undefined2 *)(iVar5 + 4);
    iVar5 = FUN_088b69ac(param_1[3]);
    DAT_09b4d48e = *(undefined2 *)(iVar5 + 6);
    DAT_09b4d488 = uVar1;
    DAT_09b4d48a = uVar2;
    DAT_09b4d48c = uVar3;
  }
  return &DAT_09b4d488;
}

