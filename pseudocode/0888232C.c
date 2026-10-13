/* Entry 0x0888232C | file offset 0x0007F304 | FUN_0888232c | bytes 100 */

undefined4 * FUN_0888232c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_0885c6cc(param_1,0x18,0,0,1,0);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}

