/* Entry 0x0894E858 | file offset 0x0014B830 | FUN_0894e858 | bytes 140 */

undefined4
FUN_0894e858(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_08949940(param_4,param_5,param_6);
  (**(code **)(*param_2 + 0x1c))
            (param_1,(int)param_2 + (int)*(short *)(*param_2 + 0x18),param_3,param_4,param_5);
  return 1;
}

