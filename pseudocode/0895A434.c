/* Entry 0x0895A434 | file offset 0x0015740C | FUN_0895a434 | bytes 84 */

undefined4
FUN_0895a434(float param_1,float param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7)

{
  *(float *)(*param_6 + 4) =
       (*(float *)(param_7 + 0x14) * param_2 + *(float *)(*param_6 + 4)) -
       *(float *)(param_5 + 0x14) * param_1;
  (**(code **)(*param_3 + 0x1c))((int)param_3 + (int)*(short *)(*param_3 + 0x18));
  return 1;
}

