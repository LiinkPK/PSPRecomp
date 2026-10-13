/* Entry 0x088C080C | file offset 0x000BD7E4 | Stat_DEF_from_growth_record | bytes 44 */

int Stat_DEF_from_growth_record(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)Growth_Linear_percent100_generic
                           ((int)*(short *)(param_1 + 0xc),(int)*(short *)(param_1 + 0xe),param_2);
  return (int)fVar1;
}

