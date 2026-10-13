/* Entry 0x089050F8 | file offset 0x001020D0 | FUN_089050f8 | bytes 176 */

bool FUN_089050f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = param_4 + 0xcU <=
          (uint)(((*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18)) -
                 (*(int *)(param_1 + 0x1c) + 1)) % *(int *)(param_1 + 0x18));
  if (bVar1) {
    local_20 = 0x47534d41;
    local_1c = param_2;
    local_18 = param_4;
    FUN_08905354(param_1 + 0x14,&local_20,0xc);
    FUN_08905354(param_1 + 0x14,param_3,param_4);
  }
  return bVar1;
}

