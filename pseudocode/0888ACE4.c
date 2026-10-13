/* Entry 0x0888ACE4 | file offset 0x00087CBC | FUN_0888ace4 | bytes 64 */

undefined4 FUN_0888ace4(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_089d6a10 + 0x7a4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = func_0x089ddd74(*(int *)(DAT_089d6a10 + 0x7a4),param_1);
  }
  return uVar1;
}

