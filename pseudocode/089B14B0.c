/* Entry 0x089B14B0 | file offset 0x001AE488 | FUN_089b14b0 | bytes 124 */

/* WARNING: Removing unreachable block (ram,0x089b1510) */

float FUN_089b14b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (param_1 != 0) {
    uVar1 = FUN_089b0c0c(param_1,0x86,0);
    uVar2 = FUN_089b0c9c(uVar1);
    fVar3 = (float)(uVar2 >> 0x18) * 0.003921569;
  }
  return fVar3;
}

