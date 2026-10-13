/* Entry 0x08916AEC | file offset 0x00113AC4 | FUN_08916aec | bytes 200 */

void FUN_08916aec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_190 [4];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined2 local_180;
  undefined2 local_52;
  
  FUN_088c1c0c(auStack_190);
  local_18c = 0xffffffff;
  local_184 = 0;
  local_188 = 0xffffffff;
  local_180 = 0;
  local_52 = 0;
  iVar1 = FUN_088c1cd4(auStack_190,&local_18c,param_2,*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 != 0) {
    if (param_3 == 0) {
      func_0x08b4a644(*(undefined4 *)(param_1 + 0x570),local_18c,local_188,0);
    }
    else {
      func_0x08b4a644(*(undefined4 *)(param_1 + 0x570),local_18c,local_188,1);
    }
    FUN_08914b64(param_1,0x10);
  }
  return;
}

