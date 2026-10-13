/* Entry 0x0899C8B0 | file offset 0x00199888 | FUN_0899c8b0 | bytes 148 */

bool FUN_0899c8b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_2;
  puVar1 = puVar2 + 6;
  if (puVar1 <= param_3) {
    puVar2[5] = 0xcb000000;
    *param_2 = puVar1;
    *puVar2 = 0xc2000000;
    puVar2[1] = 0xc3000000;
    puVar2[2] = 0xa09d13c0;
    puVar2[3] = 0xa8080008;
    puVar2[4] = 0xb8000000;
  }
  return puVar1 <= param_3;
}

