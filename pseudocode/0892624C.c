/* Entry 0x0892624C | file offset 0x00123224 | FUN_0892624c | bytes 208 */

undefined4
FUN_0892624c(undefined4 param_1,undefined4 param_2,undefined2 param_3,char *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0885c9e4(param_2,param_3,
                       (int)param_4[2] << 0x10 | (int)param_4[3] << 0x18 |
                       (int)*param_4 | (int)param_4[1] << 8);
  FUN_0885cb50(param_2,param_3,
               (int)param_4[2] << 0x10 | (int)param_4[3] << 0x18 |
               (int)*param_4 | (int)param_4[1] << 8,param_5,param_6);
  return uVar1;
}

