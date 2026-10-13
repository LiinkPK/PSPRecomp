/* Entry 0x0899F3FC | file offset 0x0019C3D4 | FUN_0899f3fc | bytes 108 */

undefined4 FUN_0899f3fc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000103;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x67452301;
    uVar1 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[1] = 0xefcdab89;
    param_1[2] = 0x98badcfe;
    param_1[3] = 0x10325476;
    param_1[4] = 0xc3d2e1f0;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined2 *)((int)param_1 + 0x16) = 0;
  }
  return uVar1;
}

