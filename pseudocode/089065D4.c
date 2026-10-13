/* Entry 0x089065D4 | file offset 0x001035AC | FUN_089065d4 | bytes 72 */

void FUN_089065d4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 1;
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_08905c58(puVar2);
    puVar1 = puVar2;
  }
  param_1[0xb4] = puVar1;
  *param_1 = 0;
  return;
}

