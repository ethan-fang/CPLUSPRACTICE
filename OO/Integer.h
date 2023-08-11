#pragma once
class Integer
{
  int *m_pInt;

public:
  Integer();
  Integer(int value);

  Integer(Integer &obj);

  int GetValue() const;

  void SetValue(int value);
  ~Integer();
};