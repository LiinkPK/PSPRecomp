/* Entry 0x089A4818 | file offset 0x001A17F0 | FUN_089a4818 | bytes 180 */

uint FUN_089a4818(float *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((0.0 <= *param_1) && (uVar3 = (uint)(*param_1 * 31.0), 0x1f < (int)uVar3)) {
    uVar3 = 0x1f;
  }
  iVar1 = 0;
  if ((0.0 <= param_1[1]) && (iVar1 = (int)(param_1[1] * 63.0), 0x3f < iVar1)) {
    iVar1 = 0x3f;
  }
  iVar2 = 0;
  if ((0.0 <= param_1[2]) && (iVar2 = (int)(param_1[2] * 31.0), 0x1f < iVar2)) {
    iVar2 = 0x1f;
  }
  return (iVar2 << 0xb | iVar1 << 5 | uVar3) & 0xffff;
}

