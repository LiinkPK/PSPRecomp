/* Entry 0x0895ED40 | file offset 0x0015BD18 | FUN_0895ed40 | bytes 144 */

undefined4 * FUN_0895ed40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *param_1 = &DAT_089dbfd8;
  uVar2 = 0;
  puVar1 = param_1;
  puVar3 = param_2;
  do {
    uVar4 = *puVar3;
    uVar2 = uVar2 + 1;
    puVar1[3] = uVar4;
    puVar1[1] = uVar4;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 2);
  puVar3 = param_2 + 4;
  uVar2 = 0;
  puVar1 = param_1;
  do {
    uVar2 = uVar2 + 1;
    puVar1[5] = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 2);
  param_2 = param_2 + 8;
  uVar2 = 0;
  puVar1 = param_1;
  do {
    uVar2 = uVar2 + 1;
    puVar1[7] = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 2);
  return param_1;
}

