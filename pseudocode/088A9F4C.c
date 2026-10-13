/* Entry 0x088A9F4C | file offset 0x000A6F24 | FUN_088a9f4c | bytes 204 */

int FUN_088a9f4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x18) <= param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_088aa4e0(param_1,*(int *)(param_1 + 0x14) + param_2 * 0x104,param_3,param_4,param_5)
    ;
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 0x104 + 0x28),
       iVar2 < *(int *)(param_1 + 0x2c))) {
      *(int *)(iVar1 + 0xc4) = *(int *)(param_1 + 0x28) + iVar2 * 0x140;
    }
  }
  return iVar1;
}

