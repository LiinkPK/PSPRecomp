/* Entry 0x08852310 | file offset 0x0004F2E8 | FUN_08852310 | bytes 104 */

undefined4 * FUN_08852310(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_08993560(param_1,2,0x340,&LAB_08852308);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0xd0;
  } while (iVar2 < 2);
  return param_1;
}

