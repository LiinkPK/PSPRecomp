/* Entry 0x088C07B4 | file offset 0x000BD78C | Stat_HP_from_growth_record | bytes 44 */

int Stat_HP_from_growth_record(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)Growth_Linear_percent100
                           ((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),param_2);
  return (int)fVar1;
}

