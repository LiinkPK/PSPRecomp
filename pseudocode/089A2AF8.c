/* Entry 0x089A2AF8 | file offset 0x0019FAD0 | FUN_089a2af8 | bytes 68 */

void FUN_089a2af8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = DAT_09af7134 + 0x10;
  puVar3 = DAT_09af7134;
  do {
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uVar5 = puVar3[3];
    *param_1 = *puVar3;
    puVar3 = puVar3 + 4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    param_1 = param_1 + 4;
  } while (puVar3 != puVar4);
  return;
}

