/* Entry 0x088F5618 | file offset 0x000F25F0 | FUN_088f5618 | bytes 152 */

bool FUN_088f5618(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = FUN_088f6554(auStack_30,&local_2c,param_1 + param_6 * 0x10a8);
  if (iVar1 == 1) {
    *param_2 = local_2c;
    *param_3 = local_28;
    *param_4 = local_24;
    *param_5 = local_20;
  }
  return iVar1 == 1;
}

