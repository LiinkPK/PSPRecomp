/* Entry 0x088C8434 | file offset 0x000C540C | FUN_088c8434 | bytes 48 */

uint FUN_088c8434(int param_1)

{
  uint uVar1;
  
  uVar1 = 199 - *(int *)(param_1 + 0xbda4);
  if (199 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

