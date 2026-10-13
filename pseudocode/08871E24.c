/* Entry 0x08871E24 | file offset 0x0006EDFC | FUN_08871e24 | bytes 568 */

void FUN_08871e24(int param_1,int param_2)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  uint local_3c;
  byte local_38;
  byte local_37;
  
  local_50 = 0x42ff0000;
  local_4c = 0x42ff0000;
  local_48 = 0;
  local_44 = 0;
  if (*(int *)(param_1 + 0x50) == 1) {
    FUN_089a383c((float)*(byte *)(param_1 + 0x48),(float)*(byte *)(param_1 + 0x49),0,0,&local_50);
  }
  else if (param_2 == 0) {
    sceCtrlReadBufferPositive(auStack_40,1);
    if ((local_3c & 0x20000) != 0) {
      local_38 = 0x80;
      local_37 = 0x80;
    }
    FUN_089a383c((float)local_38,(float)local_37,0,0,&local_50);
  }
  FUN_08871e08(param_1,&local_50);
  FUN_08871bd0(param_1);
  return;
}

