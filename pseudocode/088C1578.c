/* Entry 0x088C1578 | file offset 0x000BE550 | FUN_088c1578 | bytes 256 */

void FUN_088c1578(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  bVar1 = true;
  FUN_088c0010(&local_50);
  if (param_2[1] != 0) {
    FUN_088c014c(&local_50,param_2[1]);
    bVar1 = local_20 == 0;
  }
  if (((bVar1) && (*param_2 != 0)) &&
     (iVar2 = FUN_088bff40((int)*(short *)(*param_2 + 6)), iVar2 != 0)) {
    FUN_088c00b0(&local_50,iVar2);
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = local_40;
  param_1[5] = local_3c;
  param_1[6] = local_38;
  param_1[7] = local_34;
  param_1[8] = local_30;
  param_1[9] = local_2c;
  param_1[10] = local_28;
  param_1[0xb] = local_24;
  param_1[0xc] = local_20;
  return;
}

