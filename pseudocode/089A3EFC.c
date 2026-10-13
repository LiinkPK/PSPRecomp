/* Entry 0x089A3EFC | file offset 0x001A0ED4 | FUN_089a3efc | bytes 68 */

undefined4 * FUN_089a3efc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = param_2 + 0x10;
  puVar3 = param_1;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    *puVar3 = *param_2;
    param_2 = param_2 + 4;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
    puVar3[3] = uVar5;
    puVar3 = puVar3 + 4;
  } while (param_2 != puVar4);
  return param_1;
}

