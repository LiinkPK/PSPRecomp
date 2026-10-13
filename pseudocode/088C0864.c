/* Entry 0x088C0864 | file offset 0x000BD83C | Stat_CP_from_growth_record | bytes 44 */

int Stat_CP_from_growth_record(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)Growth_Linear_percent100_generic
                           ((int)*(short *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x16),param_2)
  ;
  return (int)fVar1;
}

