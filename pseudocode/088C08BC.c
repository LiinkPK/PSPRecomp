/* Entry 0x088C08BC | file offset 0x000BD894 | Progression_ExperienceRequirement_times5 | bytes 52 */

int Progression_ExperienceRequirement_times5(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = (float)Growth_Linear_percent100
                           ((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),param_2);
  return (int)fVar1 * 5;
}

