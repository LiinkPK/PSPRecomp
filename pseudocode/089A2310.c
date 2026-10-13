/* Entry 0x089A2310 | file offset 0x0019F2E8 | FUN_089a2310 | bytes 508 */

void FUN_089a2310(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  DAT_09af7134 = 0;
  if (param_5 != 0) {
    iVar1 = param_2 + param_3 + param_4;
    DAT_09af7134 = param_1 + iVar1 * 0x40;
    DAT_09af7160 = param_1 + (iVar1 + param_5) * 0x40;
    DAT_09af7130 = 3;
    DAT_09af715c = DAT_09af7134;
    DAT_09af7164 = DAT_09af7134;
    FUN_089a250c();
  }
  else {
    DAT_09af7160 = 0;
    DAT_09af715c = 0;
    DAT_09af7164 = 0;
  }
  DAT_09af7174 = (uint)(param_5 != 0);
  if (param_4 != 0) {
    DAT_09af7134 = param_1 + (param_2 + param_3) * 0x40;
    DAT_09af7154 = param_1 + (param_2 + param_3 + param_4) * 0x40;
    DAT_09af7130 = 2;
    DAT_09af7150 = DAT_09af7134;
    DAT_09af7158 = DAT_09af7134;
    FUN_089a250c();
  }
  else {
    DAT_09af7154 = 0;
    DAT_09af7150 = 0;
    DAT_09af7158 = 0;
  }
  DAT_09af7170 = (uint)(param_4 != 0);
  if (param_3 != 0) {
    DAT_09af7134 = param_1 + param_2 * 0x40;
    DAT_09af7148 = param_1 + (param_2 + param_3) * 0x40;
    DAT_09af7130 = 1;
    DAT_09af7144 = DAT_09af7134;
    DAT_09af714c = DAT_09af7134;
    FUN_089a250c();
  }
  else {
    DAT_09af7148 = 0;
    DAT_09af7144 = 0;
    DAT_09af714c = 0;
  }
  DAT_09af716c = (uint)(param_3 != 0);
  if (param_2 == 0) {
    DAT_09af7138 = 0;
    DAT_09af713c = 0;
    DAT_09af7140 = 0;
  }
  else {
    DAT_09af713c = param_1 + param_2 * 0x40;
    DAT_09af7130 = 0;
    DAT_09af7134 = param_1;
    DAT_09af7138 = param_1;
    DAT_09af7140 = param_1;
    FUN_089a250c();
  }
  DAT_09af7168 = 1;
  DAT_09af7130 = 0;
  return;
}

