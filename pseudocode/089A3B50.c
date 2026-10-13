/* Entry 0x089A3B50 | file offset 0x001A0B28 | FUN_089a3b50 | bytes 32 */

bool FUN_089a3b50(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  uint uVar1;
  
  uVar1 = vcmp_q(1,*param_1,*param_2);
  return (uVar1 >> 5 & 1) != 0;
}

