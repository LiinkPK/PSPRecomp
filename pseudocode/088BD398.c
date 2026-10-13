/* Entry 0x088BD398 | file offset 0x000BA370 | FUN_088bd398 | bytes 48 */

undefined2 * FUN_088bd398(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[2] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  return param_1;
}

