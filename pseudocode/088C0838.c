/* Entry 0x088C0838 | file offset 0x000BD810 | Stat_LUK_from_growth_record | bytes 44 */

int Stat_LUK_from_growth_record(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)Growth_Linear_percent100_generic
                           ((int)*(short *)(param_1 + 0x10),(int)*(short *)(param_1 + 0x12),param_2)
  ;
  return (int)fVar1;
}

