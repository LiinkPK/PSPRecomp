/* Entry 0x088B7AE8 | file offset 0x000B4AC0 | FUN_088b7ae8 | bytes 48 */

uint FUN_088b7ae8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x5a + param_2);
  if (uVar1 == 0xff) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar1 | 0x4000;
  }
  return uVar1;
}

