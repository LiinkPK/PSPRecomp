/* Entry 0x089A2A98 | file offset 0x0019FA70 | FUN_089a2a98 | bytes 96 */

void FUN_089a2a98(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = param_1 + 0x10;
  puVar3 = DAT_09af7134;
  do {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    *puVar3 = *param_1;
    param_1 = param_1 + 4;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
    puVar3[3] = uVar5;
    puVar3 = puVar3 + 4;
  } while (param_1 != puVar4);
  (&DAT_09af7168)[DAT_09af7130] = 1;
  return;
}

