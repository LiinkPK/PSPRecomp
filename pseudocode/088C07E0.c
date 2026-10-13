/* Entry 0x088C07E0 | file offset 0x000BD7B8 | Stat_ATK_from_growth_record | bytes 44 */

int Stat_ATK_from_growth_record(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)Growth_Linear_percent100_generic
                           ((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10),param_2);
  return (int)fVar1;
}

